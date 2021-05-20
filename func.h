#ifndef FUNCTION
#define FUNCTION
#include<iostream>
#include<vector>
#include<iomanip>
#include<fstream>
#include <algorithm>
using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::sort;
using std::left;
using std::fixed;
using std::streamsize;
using std::ifstream;
using std::ofstream;
using std::setprecision;

inline ifstream infile("studentai10000.txt");
inline ofstream offile("res.txt");

struct mokinys {
    string vardas;
    string pavarde;
    double egzaminas;
    vector<double> nd;
    double vidurkis;
    double mediana;
};
void getAverages(vector<mokinys> &p);
bool compare(const mokinys &first, const mokinys &second);
void getMedians(vector<mokinys> &p);
void writeEverything(vector<mokinys> p);

#endif