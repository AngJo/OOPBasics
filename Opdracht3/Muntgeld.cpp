//
// Created by User on 18-10-2018.
//

#include "Muntgeld.h"

Muntgeld::Muntgeld(string naam, float waarde) {
    naam = naam;
    waarde = waarde;

}

void Muntgeld::setWaarde(float w){
    waarde = w;
}

void Muntgeld::setNaam(string n){
    naam = n;
}
float Muntgeld::getWaarde() {
    return this->waarde;
}

string Muntgeld::getNaam() {
    return this->naam;
}