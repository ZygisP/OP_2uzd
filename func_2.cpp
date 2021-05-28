#include "func_2.h"
void getAverages(deque<mokinys> &p) {
    auto start = std::chrono::steady_clock::now();
    cout<<"Calculating averages..."<<endl;
    double sum = 0;
    for(int i=0; i<p.size(); i++){
        sum = 0;
        for(int j=0; j<p[i].nd.size(); j++){
            sum+=p[i].nd[j];
        }
        p[i].vidurkis = 0.4 * (sum/p[i].nd.size()) + 0.6 * p[i].egzaminas;
    }
    auto ending = std::chrono::steady_clock::now();
    cout<<"Done in : "<<std::chrono::duration <double, milli>(ending - start).count()<<" ms"<<endl;
}

bool compare(const mokinys &first, const mokinys &second){
	return (first.vardas < second.vardas ||
         (first.vardas == second.vardas && first.pavarde < second.pavarde));
}

bool isInt(string s) {
    for (int i=0;i<s.length();i++)
        if (isdigit(s[i]) == false)
            return false;
    return true;
}
void getMedians(deque<mokinys> &p) {
    cout<<"Calculating medians..."<<endl;
    auto start = std::chrono::steady_clock::now();
    for(int x=0; x<p.size(); x++){
        int n = p[x].nd.size();
        sort(p[x].nd.begin(), p[x].nd.end());
        if(n%2 == 1){
            p[x].mediana = 0.4 * (p[x].nd[n/2]) + 0.6 * p[x].egzaminas;
        } else {
            p[x].mediana = 0.4 * ((p[x].nd[n/2] + p[x].nd[(n/2)-1]) / 2) + 0.6 * p[x].egzaminas;
        }
    }
    auto ending = std::chrono::steady_clock::now();
    cout<<"Done in : "<<std::chrono::duration <double, milli>(ending - start).count()<<" ms"<<endl;
}
int numOfDigits(int number){
    int output = 0;
    if(number == -1){
        output = 0;
    } else if(number==0){
        number=1;
    }
    while(number>0){
        number=number/10;
        output++;
    }
    return output;
}
void generateInputFile(int nOfNd, int nOfStudents){
    auto start = std::chrono::steady_clock::now();
    int temp = -1;
    string name = "Vardas";
    string surname = "Pavarde";
    string nd = "ND";
    srand(time(NULL));

    ofstream rOffile;
    cout<<"Generating..."<<endl;
    rOffile.open("randomized_input.txt");
    rOffile << setw(20) << left << name << setw(20) << left << surname;
    for(int i=1; i< nOfNd+1; i++){
        rOffile << setw(5) << right << nd << i ;
    }
    rOffile << setw(10) << right << "Egz." << endl;
    for(int i=0; i<nOfStudents; i++){
        rOffile << right <<  name << i;
        rOffile << setw(20-numOfDigits(i)) << right;
        rOffile << surname << i;

        for(int j=0; j<nOfNd; j++){
            if(j==0){
                rOffile << setw(18-numOfDigits(i)) << right;
            }
            else{
                rOffile << setw(6) << right;
            }
            rOffile  << rand() % 10 + 1;
        }
        rOffile << setw(6) << right << rand() % 10 + 1;
        if(i != nOfStudents-1) {
            rOffile<<endl;
        }
    }
    rOffile.close();
    auto ending = std::chrono::steady_clock::now();
    cout<<"Done in : "<<std::chrono::duration <double, milli>(ending - start).count()<<" ms"<<endl;
}
void readFromFile (deque<mokinys> &p, string inputFileName) {
    auto start = std::chrono::steady_clock::now();
    inputFileName+=".txt";
    ifstream infile (inputFileName);
    string value = "";
    infile>>value>>value>>value;
    int nOfNd= 0;
    while(value[0] == 'N'){
        infile>>value;
        nOfNd++;
    }
    cout<<"Reading from file..."<<endl;
    for(int i=0;;i++){
        if(infile.eof()) break;
        p.push_back(mokinys());
        infile>>p[i].vardas;
        infile>>p[i].pavarde;
        for(int j=0;j<nOfNd; j++){
            p[i].nd.push_back(double());
            infile>>p[i].nd[j];
        }
        infile>>p[i].egzaminas;
    }
    auto ending = std::chrono::steady_clock::now();
    cout<<"Done in : "<<std::chrono::duration <double, milli>(ending - start).count()<<" ms"<<endl;
}

bool isSmart (mokinys &i) {
    if (i.vidurkis > 5.0)
        return false;
    else
        return true;
}
void sortByCool(deque<mokinys> &p, deque<mokinys> &l) {
    auto start = std::chrono::steady_clock::now();
    int counter = 0;
    cout<<"Splitting students..."<<endl;
    std::deque<mokinys>::iterator bound = partition(p.begin(), p.end(), isSmart);
    for (std::deque<mokinys>::iterator it=p.begin(); it != bound; ++it) {
        l.push_back(p[counter]);
        counter++;
    }
    p.erase(p.begin(), p.begin() + l.size());

    auto ending = std::chrono::steady_clock::now();
    cout<<"Done in : "<<std::chrono::duration <double, milli>(ending - start).count()<<" ms"<<endl;
}


void writeEverything(deque<mokinys> p, deque<mokinys> l) {
    auto start = std::chrono::steady_clock::now();
    cout<<"Writing..."<<endl;
    ofstream offile_k ("kietekai.txt");
    offile_k.width(15);
    offile_k << left << "Vardas";
    offile_k.width(15);
    offile_k << left << "Pavarde";
    offile_k.width(20);
    offile_k << left << "Galutinis (Vid.)";
    offile_k.width(20);
    offile_k << left << "Galutinis (Med.)"<<endl;

    for (int n = 0; n < 70; n++) offile_k << "-";
    offile_k<<endl;
    for(int i=0; i < p.size(); i++) {
        offile_k.width(15);
        offile_k << left << p[i].vardas;
        offile_k.width(15);
        offile_k << left << p[i].pavarde;
        offile_k.width(20);
        offile_k << fixed << setprecision(2) << p[i].vidurkis;
        offile_k.width(20);
        offile_k << fixed << setprecision(2) << p[i].mediana<<endl;
    }

    ofstream offile_l ("lievakai.txt");
    offile_l.width(15);
    offile_l<< left << "Vardas";
    offile_l.width(15);
    offile_l << left << "Pavarde";
    offile_l.width(20);
    offile_l << left << "Galutinis (Vid.)";
    offile_l.width(20);
    offile_l << left << "Galutinis (Med.)"<<endl;

    for (int n = 0; n < 70; n++) offile_l << "-";
    offile_l<<endl;
    for(int i=0; i < l.size(); i++) {
        offile_l.width(15);
        offile_l << left << l[i].vardas;
        offile_l.width(15);
        offile_l << left << l[i].pavarde;
        offile_l.width(20);
        offile_l << fixed << setprecision(2) << l[i].vidurkis;
        offile_l.width(20);
        offile_l<< fixed << setprecision(2) << l[i].mediana<<endl;
    }
    auto ending = std::chrono::steady_clock::now();
    cout<<"Done in : "<<std::chrono::duration <double, milli>(ending - start).count()<<" ms"<<endl;
}