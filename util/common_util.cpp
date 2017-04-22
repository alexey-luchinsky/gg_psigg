#include "common_util.h"
#include <sstream>

using namespace std;

vector<string> &split_string(const string &s, char delim, vector<string> &elems) {
    stringstream ss(s);
    string item;
    while (getline(ss, item, delim)) {
        elems.push_back(item);
    }
    return elems;
}

vector<string> split_string(const string &s, char delim) {
    vector<string> elems;
    split_string(s, delim, elems);
    return elems;
}

bool ends_with(string const &s, string const &e) {
    if (s.length() >= e.length())
        return (0 == s.compare(s.length() - e.length(), e.length(), e));
    else
        return false;
}