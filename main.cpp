#include "func.h"

int main() {
    vector<mokinys> p;
    string value;
    double value_d;

    int input = 0;
    cout<<"Pasirinkite ivedimo buda :"<<endl;
    cout<<"0 - ivedimas ranka"<<endl;
    cout<<"1 - ivedimas failu"<<endl;
    cin>>input;
    if(!input){
        for(int i=0;; i++){
            p.push_back(mokinys());
            cout<<"Iveskite "<<i+1<<" mokinio varda"<<endl;
            cin>>value;
            if(value != "0") {
                p[i].vardas = value;
            } else {
                break;
            }
            cout<<"Iveskite "<<i+1<<" mokinio pavarde"<<endl;
            cin>>value;
            if(value != "0") {
                p[i].pavarde = value;
            } else {
                break;
            }
            for(int j=0;; j++){
                cout<<"Iveskite "<<i+1<<" mokinio "<<j<<" namu darbo rezultata"<<endl;
                cin>>value_d;
                if(value_d != 0) {
                    p[i].nd.push_back(double());
                    p[i].nd[j] = value_d;
                } else {
                    break;
                }
            }
            cout<<"Iveskite "<<i+1<<" mokinio egzamino rezultata"<<endl;
            cin>>value_d;
            if(value_d != 0) {
                p[i].egzaminas = value_d;
            } else {
                break;
            }
        }
        p.pop_back();
        getAverages(p);
        getMedians(p);
        sort(p.begin(), p.end(), compare);
        writeEverything(p);
    } else {
        //ifstream infile("studentai10000.txt");
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
            p.push_back(mokinys());
            infile>>p[i].vardas;
            infile>>p[i].pavarde;
            for(int j=0;j<nOfNd; j++){
                p[i].nd.push_back(double());
                infile>>p[i].nd[j];
            }
            infile>>p[i].egzaminas;
        }
    }
    getAverages(p);
    getMedians(p);
    sort(p.begin(), p.end(), compare);
    writeEverything(p);
}
