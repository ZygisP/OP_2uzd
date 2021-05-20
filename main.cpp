#include<iostream>
#include<vector>
#include<iomanip>
#include<string>

struct Studentas {
    std::string vardas;
    std::string pavarde;
    double egz;
    std::vector<double> nd;
    double vidurkis;
    double mediana;
};
double getAverage(std::vector<Studentas> v, int index) {
    double sum = 0;
    for(int i=0; i<v[index].nd.size(); i++){
        sum += v[index].nd[i];
    }
    return sum/v.size();
}
double getMedian(std::vector<Studentas> v, int index) {
    int n = v[index].nd.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(v[index].nd[i]<v[index].nd[j]){
                double temp = v[index].nd[i];
                v[index].nd[i] = v[index].nd[j];
                v[index].nd[j] = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        std::cout<<v[index].nd[i]<<std::endl;
    }
    if(n%2 == 1){
        return v[index].nd[n/2];
    } else {
        return (v[index].nd[n/2] + v[index].nd[(n/2)-1]) / 2;
    }
}
void writeEverything(std::vector<Studentas> v) {
    v.pop_back();
    std::cout<<std::endl;
    for(int i=0;i<v.size(); i++){
        std::cout<<"Vardas : "<<v[i].vardas<<std::endl;
        std::cout<<"Pavarde : "<<v[i].pavarde<<std::endl;
        std::cout<<"Vidurkis : "<<std::fixed<<std::setprecision(2)<<v[i].vidurkis<<std::endl;
        std::cout<<"Mediana : "<<v[i].mediana<<std::endl;
        std::cout<<"Egzamino Rezultatas : "<<v[i].egz<<std::endl;
    }
}
int main() {
    std::vector<Studentas> v;
    std::string input;
    double input_d;
    for(int i=0;; i++){
        v.push_back(Studentas());
        std::cout<<"Iveskite "<<i+1<<" mokinio varda"<<std::endl;
        std::cin>>input;
        if(input != "0") {
            v[i].vardas = input;
        } else {
            break;
        }
        std::cout<<"Iveskite "<<i+1<<" mokinio pavarde"<<std::endl;
        std::cin>>input;
        if(input != "0") {
            v[i].pavarde = input;
        } else {
            break;
        }
        for(int j=0;; j++){
            std::cout<<"Iveskite "<<i+1<<" mokinio "<<j<<" namu darbo rezultata"<<std::endl;
            std::cin>>input_d;
            if(input_d != 0) {
                v[i].nd.push_back(double());
                v[i].nd[j] = input_d;
            } else {
                break;
            }
        }
        std::cout<<"Iveskite "<<i+1<<" mokinio egzamino rezultata"<<std::endl;
        std::cin>>input_d;
        if(input_d != 0) {
            v[i].egz = input_d;
        } else {
            break;
        }

        v[i].vidurkis = getAverage(v, i);
        v[i].mediana = getMedian(v, i);
    }
    writeEverything(v);
}
