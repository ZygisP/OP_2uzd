#ifndef mokinys_h
#define mokinys_h

#include "libraries.h"

class mokinys {
private:
    string vardas, pavarde;
    double vidurkis, mediana;

public:
    //CONSTRUCTOR
    mokinys() {
        this->vardas = "";
        this->pavarde = "";
        this->mediana = 0;
        this->vidurkis = 0;
    }

    //COPY CONSTRUCTOR
    mokinys(const mokinys& student) {
        this->vardas = student.vardas;
        this->pavarde = student.pavarde;
        this->mediana = student.mediana;
        this->vidurkis = student.vidurkis;
    }

    // ASSIGN OPERATOR
    mokinys operator=(const mokinys& student) {
        this->vardas = student.vardas;
        this->pavarde = student.pavarde;
        this->mediana = student.mediana;
        this->vidurkis = student.vidurkis;
        return *this;
    }
    
    ~mokinys() {} // destructor
    // getters
    string getVardas() {
        return vardas;
    }
    string getPavarde() {
        return pavarde;
    }
    double getMedian() {
        return mediana;
    }
    double getAvg() {
        return vidurkis;
    }

    //setters
    void setVardas(string name) {
        vardas = name;
    }

    void setPavarde(string surname) {
        pavarde = surname;
    }

    void setMedian(double m) {
        mediana = m;
    }

    void setAvg(double a) {
        vidurkis = a;
    }

    bool operator < (const mokinys &student) const {
        return vardas.compare(student.vardas) < 0;
    }
};
#endif