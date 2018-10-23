//
// Created by User on 18-10-2018.
//

#include "Muntgeld.h"

Muntgeld::Muntgeld(string naam, double waarde) {
    this->naam = naam;
    this->waarde = waarde;

}

double Muntgeld::getWaarde() {
    return this->waarde;
}

string Muntgeld::getNaam() {
    return this->naam;
}