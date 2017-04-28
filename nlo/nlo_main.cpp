#include "config.h"
#include <iostream>
#include <ctime>
#include <limits>
#include <iomanip>

#include "TVectorD.h"
#include "TSystem.h"
#include "TFile.h"
#include "TH1F.h"
#include "TNtuple.h"

#include <tclap/CmdLine.h>

#include "algebra.h"
#include "../globals/global_kinematics.h"
#include "nlo_kinematics.h"
//#include "abbreviations.h"
//#include "amplitudes.h"
#include "Rambo3.h"

using namespace std;


/** INTERNAL VARIABLES **/
static Rambo3 rambo;
static dbl_type phase_space_factor;

cmplx Amp[nColors];
cmplx abbr[nKK];





/**
 * Initialize starting configuration
 */
void initialize() {
    __global_init__();
    rambo = Rambo3((dbl_type) 0.0, (dbl_type) 0.0, (dbl_type) 2.0 * MC, &random_generator);
    init_mult_table();
    swich_all_diags(true);
    switch_ggPsi_diags(true);

    cout << "MC=" << MC << endl;
}

/**
 * Fills k3, k4 and pPsi momenta according to the specified @param hard_ecm
 */
void next_kinematics() {
    //s already set
    dbl_type hard_ecm = sqrt(s);
    //set incoming momentums
    k1[0] = k1[1] = k2[0] = k2[1] = 0;
    k1[2] = hard_ecm / 2.;
    k1[3] = hard_ecm / 2.;
    k2[2] = -hard_ecm / 2.;
    k2[3] = hard_ecm / 2.;
    //set outgoing momentums
    phase_space_factor = rambo.next(hard_ecm, k3, k4, pPsi);


    //assertions
    dbl_type Pin[4], Pout[4];
    sum(k1, k2, Pin);
    assert(is_zero(mass2(k1)));
    assert(is_zero(mass2(k2)));
    assert(are_equal(mass2(Pin), hard_ecm * hard_ecm));
    sum(k3, k4, pPsi, Pout);
    assert(is_zero(mass2(k3)));
    assert(is_zero(mass2(k4)));
    assert(are_equal(mass2(pPsi), 4 * MC * MC));
    assert(are_equal(Pin, Pout));
};

/**
 * Sets configuration of polarization vectors
 */
void set_polarization_configuration(int pol_k1, int pol_k2, int pol_k3, int pol_k4, int pol_psi) {
    set_gluon_polarization(pol_k1, k1, epsG1);
    set_gluon_polarization(pol_k2, k2, epsG2);
    set_gluon_polarization(pol_k3, k3, epsG3);
    set_gluon_polarization(pol_k4, k4, epsG4);
    set_psi_polarization(pol_psi, pPsi, epsPsi);

    //assertions
    assert(is_zero(sp(k1, epsG1)));
    assert(is_zero(sp(k2, epsG2)));
    assert(is_zero(sp(k3, epsG3)));
    assert(is_zero(sp(k4, epsG4)));
    assert(is_zero(sp(pPsi, epsPsi)));

    //setup polarization vectors
    if (test_ward_only != -1)
        switch (test_ward_only) {
            case 1:
                set_polarization_to_momentum(epsG1, k1);
                break;
            case 2:
                set_polarization_to_momentum(epsG2, k2);
                break;
            case 3:
                set_polarization_to_momentum(epsG3, k3);
                break;
            case 4:
                set_polarization_to_momentum(epsG4, k4);
                break;
            default:
                cout << BOLDMAGENTA << "Unknown ward test " << test_ward_only <<"\n"<< RESET;
                ::abort();
        };
}

/**
 * Calculates the squared matric element
 */

void calc_KK();
void calc_amps();

dbl_type calc_amplitude_square() {
    dbl_type matr2 = 0;
    for (int iCol = 0; iCol < nColors; ++iCol) {
        for (int ciCol = 0; ciCol < nColors; ++ciCol) {
            matr2 += real(cMult[iCol][ciCol] * Amp[iCol] * conj(Amp[ciCol]));
        };
    };
    return matr2;
}



/**
 * Prints current kinematical configuration (momentums and polarizations)
 */
void print_current_kinematics();

/**
 * Parse command line arguments
 */
void parse_command_line(int argc, char **argv);

void check_phsp_decay();
dbl_type eta_psi();

int main(int argc, char **argv) {
    clock_t now=clock();
    parse_command_line(argc, argv);
    initialize();
    print_starting_configuration();

    //total cross section
    dbl_type sigma_total = 0.0;
    dbl_type sigma_2_total = 0.0;

    dbl_type hat_s_min = 16 * MC2, hat_s_max = s_max_factor * hat_s_min;
    dbl_type hat_y_min = 0.0, hat_y_max = 0.0;
    dbl_type x1, x2, hat_y;
    dbl_type vz;
    dbl_type weight;
    dbl_type scale_Q2 = 1.0;
    dbl_type pdf1 = 1.0, pdf2 = 1.0;
    int alphas_power = 4;
    dbl_type alphas_strong = pow(0.3, alphas_power);
    dbl_type matr2, sigma;
    dbl_type temp;

    string tuple_vars = "matr2:wt:scale2:alpha5:pdf1:pdf2:";
    tuple_vars += "hat_s:e_pair:y_pair:pT_pair:dphi:";
    tuple_vars += "k3_e:k3_px:k3_py:k3_pz:k3_pT:k3_y:";
    tuple_vars += "k4_e:k4_px:k4_py:k4_pz:k4_pT:k4_y:";
    tuple_vars += "pPsi_e:pPsi_px:pPsi_py:pPsi_pz:pPsi_pT:pPsi_y";

    TFile *root_file = new TFile(output_file_name.c_str(), "RECREATE");
    TNtuple *root_tuple = new TNtuple("data", "data", tuple_vars.c_str());

    long n_passed_prev = n_passed;
    for (iteration_number = 0; n_passed < n_events; ++iteration_number) {
        //print progress
        if (n_passed > n_passed_prev && (n_passed % n_print_step) == 0) {
            //remember cout flags
            ios state(NULL);
            state.copyfmt(std::cout);

            //pretty print
            double percent = (100.0 * n_passed) / n_events;
            cout << fixed << setprecision(1);
            cout << BOLDGREEN << "[gg_psigg] " << RESET << percent << "% done ";
            cout << "(" << (100.0 * n_dropped / iteration_number) << "% events dropped)";
            cout << " sigma = "<<0.384 * 1e6*sigma_total/iteration_number << endl;

            //restore default cout flags
            cout.copyfmt(state);
            n_passed_prev = n_passed;
        }

        weight = 1.0;
        //setup kinematics
        if (!parton_level_only) {
            s = random_generator.rand(hat_s_min, hat_s_max);

            hat_y_min = log(s / hadrons_s) / 2;
            hat_y_max = -hat_y_min;
            hat_y = random_generator.rand(hat_y_min, hat_y_max);

            temp = sqrt(s / hadrons_s);
            x1 = temp * exp(hat_y);
            x2 = temp * exp(-hat_y);

            assert(x1 >= 0.0 && x1 <= 1.0);
            assert(x2 >= 0.0 && x2 <= 1.0);
            assert(x1 * x2 >= (hat_s_min / hadrons_s) && x1 * x2 <= (hat_s_max / hadrons_s));
        } else {
            s = hadrons_s;
            x1 = x2 = 1.0;
        }
        //filling kinematics
        next_kinematics();

        //boost all momentums
        vz = (x1 - x2) / (x1 + x2);
        apply_boost_to(0, 0, vz, k1);
        apply_boost_to(0, 0, vz, k2);
        apply_boost_to(0, 0, vz, k3);
        apply_boost_to(0, 0, vz, k4);
        apply_boost_to(0, 0, vz, pPsi);


        //apply cuts
        temp = y_psi();
        if (temp < cut_y_psi_min || temp > cut_y_psi_max) {
            ++n_dropped;
            continue;
        }

        temp = pT_psi();
        if (temp < cut_pT_psi_min) {
            ++n_dropped;
            continue;
        }

        temp = pT_psig_min();
        if (temp < cut_pT_psig_min) {
            ++n_dropped;
            continue;
        };
        temp = m_psig_min();
        if (temp < cut_m_psig_min) {
            ++n_dropped;
            continue;
        };
        
        temp = eta_psi();
        if( temp < cut_eta_psi_min || temp>cut_eta_psi_max) {
            ++n_dropped;
            continue;
        }

        ++n_passed;

        matr2 = 0.0;
        //loop over all polarizations:
        for (int iG1 = 0; iG1 <= 1; ++iG1)
            for (int iG2 = 0; iG2 <= 1; ++iG2)
                for (int iG3 = 0; iG3 <= 1; ++iG3)
                    for (int iG4 = 0; iG4 <= 1; ++iG4)
                        for (int iPsi = 0; iPsi <= 2; ++iPsi) {
                            set_polarization_configuration(iG1, iG2, iG4, iG3, iPsi);
                            calc_sp_global();
                            calc_sp_nlo();
                            calc_KK();
                            calc_amps();
                            matr2 += calc_amplitude_square();
                        }

        if (!parton_level_only) {
            scale_Q2 = hard_scale();
            pdf1 = lhapdf_pdf->xfxQ2(0, (double) x1, (double) scale_Q2);
            pdf2 = lhapdf_pdf->xfxQ2(0, (double) x2, (double) scale_Q2);
            alphas_strong = pow(lhapdf_pdf->alphasQ2((double) scale_Q2), alphas_power);
            weight *= (hat_s_max - hat_s_min);
            weight *= (hat_y_max - hat_y_min);
            weight *= pdf1 / x1;
            weight *= pdf2 / x2;
            weight /= hadrons_s;
        }

        if (debug()) {
            static const string debug_str(string(DEBUG_COLOR) + "[DEBUG] " + RESET);
            cout << endl;
            cout << debug_str << "Iteration                : " << iteration_number << endl;
            cout << debug_str << "Sigma                    : " << matr2 << endl;
            cout << debug_str << "Phase space factor       : " << phase_space_factor << endl;
            cout << debug_str << "x1                       : " << x1 << endl;
            cout << debug_str << "x2                       : " << x2 << endl;
            cout << debug_str << "Scale Q2                 : " << scale_Q2 << endl;
            cout << debug_str << "PDF's weight             : " << weight << endl;
            cout << debug_str << "Total weight             : " << (phase_space_factor * weight) << endl;
            cout << debug_str << "Strong alpha             : " << alphas_strong << endl;
            cout << debug_str << "Kinematics configuration : " << endl;
            print_current_kinematics();
            cout << endl;
        }

        weight *= phase_space_factor;
        matr2 *= pow(4*PI,alphas_power); //alpha_S
        matr2 *= TWO_PI_4 / (2.0 * s); //cross section factor
        matr2 /=  2 * 8 * 2 * 8; //symmetry coefficients

        string tuple_vars = "matr2:wt:scale2:alpha5:pdf1:pdf2:";
        tuple_vars += "hat_s:e_pair:y_pair:pT_pair:dphi:";
        tuple_vars += "k3_e:k3_px:k3_py:k3_pz:k3_pT:k3_y:";
        tuple_vars += "k4_e:k4_px:k4_py:k4_pz:k4_pT:k4_y:";
        tuple_vars += "pPsi_e:pPsi_px:pPsi_py:pPsi_pz:pPsi_pT:pPsi_y";

        //        todo write x1, x2
        Float_t tuple_vals[11 + 3 * 6] = {
            matr2, weight, scale_Q2, alphas_strong, pdf1, pdf2,
            s, sum_mass(k3, k4), sum_rapidity(k3, k4), sum_pT(k3, k4), fabs(phi(k3) - phi(k4)),
            k3[3], k3[0], k3[1], k3[2], pT(k3), rapidity(k3),
            k4[3], k4[0], k4[1], k4[2], pT(k4), rapidity(k4),
            pPsi[3], pPsi[0], pPsi[1], pPsi[2], pT(pPsi), rapidity(pPsi)
        };
        root_tuple->Fill(tuple_vals);

        sigma = weight * alphas_strong * matr2;
        sigma_total += sigma;
        sigma_2_total += pow(sigma, 2);
    }


    sigma_total = sigma_total / iteration_number;
    sigma_2_total = sigma_2_total / iteration_number;
    dbl_type sigma_total_err = sqrt((sigma_2_total - pow(sigma_total, 2)) / iteration_number);

    sigma_total *= 0.384 * 1e6;
    sigma_total_err *= 0.384 * 1e6;

    cout << BOLDGREEN << "[gg_psigg] " << RESET;
    cout << "Job finished:" << endl << endl;
    cout << LIGHTCYAN;
    cout << "            Elapsed time: "<< (double)(clock()-now)/CLOCKS_PER_SEC <<" seconds"<< endl;
    cout << "            SIGMA       = " << sigma_total << " nb" << endl;
    cout << "            SIGMA_ERR   = " << sigma_total_err << " nb" << endl;
    cout << "            ITERATIONS  = " << iteration_number << endl;
    cout << RESET;

    string stats_tuple_vars = "n_passed:n_iterations:random_seed:ecm:sigma:sigma_err:";
    stats_tuple_vars += "y1_min:y1_max:y2_min:y2_max:gluon_pT:smax_factor:psi_pT_min";

    TNtuple *root_stats_tuple = new TNtuple("stats", "stats", stats_tuple_vars.c_str());
    root_stats_tuple->Fill(n_passed, iteration_number, random_seed, ecm, sigma_total, sigma_total_err, cut_y_psi_min, cut_y_psi_max, 0, 0, cut_pT_gluon_min, s_max_factor, cut_pT_psi_min);
    root_stats_tuple->Write();
    root_tuple->Write();
    root_file->Save();
    return 0;
}

void parse_command_line(int argc, char **argv) {
    try {

        TCLAP::CmdLine cmd("gggpsipsi", ' ', "1.0");
        insert_default_args(cmd);
        cmd.parse(argc, argv);
        initialize_from_cmd();
    } catch (TCLAP::ArgException &e) {
        std::cerr << "error: " << e.error() << " for arg " << e.argId() << std::endl;
    }
}

void print_current_kinematics() {
    cout << "        Momentums:" << endl;
    string prefix = string("          ");
    println_4v(prefix + "k1", k1);
    println_4v(prefix + "k2", k2);
    println_4v(prefix + "k3", k3);
    println_4v(prefix + "k4", k4);
    println_4v(prefix + "pPsi", pPsi);
    cout<<prefix<<"pT_psig_min="<<pT_psig_min()<<endl;

    cout << "        Polarizations:" << endl;
    println_4v(prefix + "epsG1", epsG1);
    println_4v(prefix + "epsG2", epsG2);
    println_4v(prefix + "epsG3", epsG3);
    println_4v(prefix + "epsG4", epsG4);
    println_4v(prefix + "epsPpsi", epsPsi);

    cout << "        Kinematic variables:" << endl;
    cout << prefix << "s = " << s << endl;
}

//void check_phsp_decay() {
//    random_generator = Random(1213243);
//    rambo = Rambo3(0.0, 0.0, 0.0, &random_generator);
//    dbl_type M = 10.0;
//    dbl_type wi = 0;
//    int N = 1000000;
//    for (int i = 0; i < N; ++i) {
//        s = M * M;
//        next_kinematics();
//        dbl_type tmp[4];
//        sum(p1, p2, tmp);
//        sum(tmp, k3, tmp);
//        dbl_type matr2 = 64 * sp(p1, p2) * sp(k3, tmp);
//        matr2 *= phase_space_factor;
//        matr2 *= pow(2 * M_PI, 4);
//        matr2 /= 2 * M;
//        wi += matr2;
//    }
//    wi /= N;
//    cout << wi << endl;
//    cout << pow(M, 5) / (192.0 * pow(M_PI, 3)) << endl;
//}