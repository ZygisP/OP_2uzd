#ifndef FUNCTION
#define FUNCTION

#include "libraries.h"
#include "mokinys.h"

void writeToFiles(vector<mokinys> &p);
void sortByCool(vector<mokinys> &k, vector<mokinys> &l, vector<mokinys> &p);
void readFromFile (vector<mokinys> &p);
void generateInputFile(int nOfNd, int nOfStudents, string filename);
bool checkFileExists(string filename);
int numOfDigits(int number);
void getAverage(vector<mokinys> &p);
void getMedian(vector<mokinys> &p);
#endif