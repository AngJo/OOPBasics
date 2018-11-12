//
// Created by User on 12-11-2018.
//

#include "Vak.h"

Vak::Vak() {}
Vak::Vak(string vakNaam, string lesCode) {
    this->vakNaam = vakNaam;
    this->lesCode = lesCode;
}

string Vak::getLesCode() {return this->lesCode;}
string Vak::getVakNaam() {return this->vakNaam;}