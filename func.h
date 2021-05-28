#ifndef FUNCTION
#define FUNCTION
#include <iostream>
#include <deque>
#include <iomanip>
#include <fstream>
#include <algorithm>
#include <ctime>
#include <chrono>
using std::string;
using std::deque;
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
using std::to_string;

//inline ifstream infile("studentai10000.txt");
//inline ofstream offile("res.txt");

struct mokinys {
    string vardas;
    string pavarde;
    double egzaminas;
    deque<double> nd;
    double vidurkis;
    double mediana;
};
void getAverages(deque<mokinys> &p);
bool compare(const mokinys &first, const mokinys &second);
bool isInt(string s);
void getMedians(deque<mokinys> &p);
int numOfDigits(int number);
void generateInputFile(int nOfNd, int nOfStudents, string filename);
void sortByCool(deque<mokinys> &k, deque<mokinys> &l, deque<mokinys> &p);
void readFromFile(deque<mokinys> &p, string inputFileName);
void writeEverything(deque<mokinys> k, deque<mokinys> l);

#endif