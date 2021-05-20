#ifndef FUNCTION
#define FUNCTION
#include <iostream>
#include <vector>
#include <iomanip>
#include <fstream>
#include <algorithm>
#include <ctime>
#include <chrono>
using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::sort;
using std::left;
using std::right;
using std::setw;
using std::fixed;
using std::streamsize;
using std::ifstream;
using std::ofstream;
using std::setprecision;
using std::milli;
using std::stoi;
using std::stod;
using std::exception;

//inline ifstream infile("studentai10000.txt");
//inline ofstream offile("res.txt");

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
bool isInt(string s);
bool isDouble(string s);
void getMedians(vector<mokinys> &p);
int numOfDigits(int number);
void generateInputFile(int nOfNd, int nOfStudents);
void sortByCool(vector<mokinys> &p, vector<mokinys> &l);
void readFromFile(vector<mokinys> &p, string inputFileName);
void writeEverything(vector<mokinys> p, vector<mokinys> l);

#endif