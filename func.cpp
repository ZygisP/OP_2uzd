#include "func.h"
void getAverages(vector<mokinys> &p) {
    double sum = 0;
    for(int i=0; i<p.size(); i++){
        sum = 0;
        for(int j=0; j<p[i].nd.size(); j++){
            sum+=p[i].nd[j];
        }
        p[i].vidurkis = sum/p[i].nd.size();
    }
}

bool compare(const mokinys &first, const mokinys &second){
	return (first.vardas < second.vardas ||
         (first.vardas == second.vardas && first.pavarde < second.pavarde));
}
void getMedians(vector<mokinys> &p) {
    for(int x=0; x<p.size(); x++){
        int n = p[x].nd.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(p[x].nd[i]<p[x].nd[j]){
                    double temp = p[x].nd[i];
                    p[x].nd[i] = p[x].nd[j];
                    p[x].nd[j] = temp;
                }
            }
        }
        if(n%2 == 1){
            p[x].mediana = p[x].nd[n/2];
        } else {
            p[x].mediana = (p[x].nd[n/2] + p[x].nd[(n/2)-1]) / 2;
        }
    }
}
void writeEverything(vector<mokinys> p) {
    //ofstream offile ("res.txt");
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
    for(int i=0; i < p.size(); i++) {
        offile.width(15);
        offile << left << p[i].vardas;
        offile.width(15);
        offile << left << p[i].pavarde;
        offile.width(20);
        offile << fixed << setprecision(2) << p[i].vidurkis;
        offile.width(20);
        offile << fixed << setprecision(2) << p[i].mediana<<endl;
    }
}