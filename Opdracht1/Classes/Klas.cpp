//
// Created by User on 12-11-2018.
//

#include "Klas.h"

Klas::Klas(){}
Klas::Klas(int studenten, string naam) {
    this->aantalStudenten = studenten;
    this->naam = naam;
}

int Klas::getAantalStudenten() {return this->aantalStudenten;}
string Klas::getKlasNaam() {return this->naam;}