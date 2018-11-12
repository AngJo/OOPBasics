//
// Created by User on 12-11-2018.
//

#ifndef OPDRACHT1_KLAS_H
#define OPDRACHT1_KLAS_H
#include <string>
using namespace std;

class Klas {
private:
    int aantalStudenten;
    string naam;
    //List<Student> studenten;
public:
    Klas();
    Klas(int studenten, string naam);
    int getAantalStudenten();
    string getKlasNaam();
};


#endif //OPDRACHT1_KLAS_H
