#ifndef GGGPSIPSI_COMMON_UTIL_H
#define GGGPSIPSI_COMMON_UTIL_H

#include <string>
#include <sstream>
#include <vector>
#include <unistd.h>

using namespace std;

vector<string> &split_string(const string &s, char delim, vector<string> &elems);

vector<string> split_string(const string &s, char delim);

bool ends_with(string const &s, string const &e);

inline
string get_wdir() {
    static char cwd[1024];
    for (int i = 0; i < 1024; ++i) cwd[i] = -1;
    getcwd(cwd, sizeof(cwd));
    unsigned long length = 0;
    while (cwd[length] != -1) ++length;
    string path(cwd, length - 1);
    return path;
}

template<typename T>
string to_string(T const &expr) {
    ostringstream ss;
    ss << expr;
    return ss.str();
}

#endif //GGGPSIPSI_COMMON_UTIL_H
