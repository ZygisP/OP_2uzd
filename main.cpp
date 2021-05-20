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
struct Studentas {
    string vardas;
    string pavarde;
    double egz;
    vector<double> nd;
    double vidurkis;
    double mediana;
};
void getAverages(vector<Studentas> &v) {
    double sum = 0;
    for(int i=0; i<v.size(); i++){
        sum = 0;
        for(int j=0; j<v[i].nd.size(); j++){
            sum+=v[i].nd[j];
        }
        v[i].vidurkis = sum/v[i].nd.size();
    }
}
bool compare(const Studentas &first, const Studentas &second){
	return (first.vardas < second.vardas ||
         (first.vardas == second.vardas && first.pavarde < second.pavarde));
}
void getMedians(vector<Studentas> &v) {
    for(int x=0; x<v.size(); x++){
        int n = v[x].nd.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(v[x].nd[i]<v[x].nd[j]){
                    double temp = v[x].nd[i];
                    v[x].nd[i] = v[x].nd[j];
                    v[x].nd[j] = temp;
                }
            }
        }
        if(n%2 == 1){
            v[x].mediana = v[x].nd[n/2];
        } else {
            v[x].mediana = (v[x].nd[n/2] + v[x].nd[(n/2)-1]) / 2;
        }
    }
}
void writeEverything(vector<Studentas> v) {
    ofstream offile ("res.txt");
    offile.width(15);
    offile << left << "Vardas";
    offile.width(15);
    offile << left << "Pavarde";
    offile.width(20);
    offile << left << "Galutinis (Vid.)";
    offile.width(20);
    offile << left << "Galutinis (Med.)"<<endl;
    for (int n = 0; n < 70; n++) offile << "-";
    offile<<endl;
    for(int i=0; i < v.size(); i++) {
        offile.width(15);
        offile << left << v[i].vardas;
        offile.width(15);
        offile << left << v[i].pavarde;
        offile.width(20);
        offile << fixed << setprecision(2) << v[i].vidurkis;
        offile.width(20);
        offile << fixed << setprecision(2) << v[i].mediana<<endl;
    }
}
int main() {
    vector<Studentas> v;
    string value;
    double value_d;

    int input = 0;
    cout<<"Pasirinkite ivedimo buda :"<<endl;
    cout<<"0 - ivedimas ranka"<<endl;
    cout<<"1 - ivedimas failu"<<endl;
    cin>>input;
    if(!input){
        for(int i=0;; i++){
            v.push_back(Studentas());
            cout<<"Iveskite "<<i+1<<" mokinio varda"<<endl;
            cin>>value;
            if(value != "0") {
                v[i].vardas = value;
            } else {
                break;
            }
            cout<<"Iveskite "<<i+1<<" mokinio pavarde"<<endl;
            cin>>value;
            if(value != "0") {
                v[i].pavarde = value;
            } else {
                break;
            }
            for(int j=0;; j++){
                cout<<"Iveskite "<<i+1<<" mokinio "<<j<<" namu darbo rezultata"<<endl;
                cin>>value_d;
                if(value_d != 0) {
                    v[i].nd.push_back(double());
                    v[i].nd[j] = value_d;
                } else {
                    break;
                }
            }
            cout<<"Iveskite "<<i+1<<" mokinio egzamino rezultata"<<endl;
            cin>>value_d;
            if(value_d != 0) {
                v[i].egz = value_d;
            } else {
                break;
            }
        }
        v.pop_back();
        getAverages(v);
        getMedians(v);
        sort(v.begin(), v.end(), compare);
        writeEverything(v);
    } else {
        ifstream infile("studentai10000.txt");
        string value = "";
        infile>>value>>value>>value;
        int nOfNd= 0;
        while(value[0] == 'N'){
            infile>>value;
            nOfNd++;
        }
        cout<<"Reading..."<<endl;
        for(int i=0;;i++){
            //if(i%10000==0) cout<<i<<endl;
            if(infile.eof()) break;
            v.push_back(Studentas());
            infile>>v[i].vardas;
            infile>>v[i].pavarde;
            for(int j=0;j<nOfNd; j++){
                v[i].nd.push_back(double());
                infile>>v[i].nd[j];
            }
            infile>>v[i].egz;
        }
    }
    getAverages(v);
    getMedians(v);
    sort(v.begin(), v.end(), compare);
    writeEverything(v);
}
