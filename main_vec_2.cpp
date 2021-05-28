#include "func_vec_2.h"
int main() {
    vector<mokinys> p;
    vector<mokinys> l;
    p.reserve(10000000);
    l.reserve(10000000);
    bool isValidInput;

    string input;
    cout<<"Pasirinkite ivedimo buda :"<<endl;
    cout<<"0 - ivedimas ranka"<<endl;
    cout<<"1 - ivedimas failu"<<endl;
    cout<<"2 - ivedimas random failu"<<endl;
    cin>>input;
    isValidInput = isInt(input);
    if(isValidInput && input == "0"){
        string value;
        double value_d;
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
                cin>>value;
                if(isDouble(value) && value != "0") { // 0 breaks us, letter fucks us
                    p[i].nd.push_back(double());
                    value_d = stod(value);
                    p[i].nd[j] = value_d;
                } else {
                    break;
                }
            }
            cout<<"Iveskite "<<i+1<<" mokinio egzamino rezultata"<<endl;
            cin>>value;
            if(isDouble(value) && value != "0") {
                p[i].egzaminas = value_d;
            } else {
                break;
            }
        }
        p.pop_back();
        getAverages(p);
        getMedians(p);
        sort(p.begin(), p.end(), compare);
        sortByCool(p, l);
        writeEverything(p, l);
    } else if (input == "1") {
        string inputFileName = "";
        cout<<"Prasome pateikti failo pavadinima"<<endl;
        cin>>inputFileName;
        readFromFile(p, inputFileName);
        getAverages(p);
        getMedians(p);
        cout<<"Sorting..."<<endl;
        sort(p.begin(), p.end(), compare);
        sortByCool(p, l);
        writeEverything(p, l);
        cout<<"Done."<<endl;
    } else if (input == "2"){
        auto start_main = std::chrono::steady_clock::now();
        int nOfNd = 0;
        int nOfStudents = 0;
        cout<<"Iveskite namu darbu kieki: "<<endl;
        cin>>nOfNd;
        cout<<"Iveskite studentu kieki: "<<endl;
        cin>>nOfStudents;
        string filename = "randomized_input_" + to_string(nOfStudents) + "_" + to_string(nOfNd) + ".txt";
        generateInputFile(nOfNd, nOfStudents, filename);
        readFromFile(p, filename);
        getAverages(p);
        getMedians(p);
        cout<<"Sorting..."<<endl;
        auto start = std::chrono::steady_clock::now();
        sort(p.begin(), p.end(), compare);
        auto ending = std::chrono::steady_clock::now();
        cout<<"Done in : "<<std::chrono::duration <double, milli>(ending - start).count()<<" ms"<<endl;
        sortByCool(p, l);
        writeEverything(p, l);
        auto ending_main = std::chrono::steady_clock::now();
        cout<<"Done. Time elapsed : "<<std::chrono::duration <double, milli>(ending_main - start_main).count()<<" ms"<<endl;
    } else {
        cout<<"Ivestas netinkamas simbolis! Programa uzbaigiama..."<<endl;
    }
}