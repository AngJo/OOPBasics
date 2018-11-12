//
// Created by User on 12-11-2018.
//

#include "Lokaal.h"

Lokaal::Lokaal() {}
Lokaal::Lokaal(string naam, double lokaalnummer) {
    this->gebouwNaam = naam;
    this->lokaal = lokaalnummer;
}

string Lokaal::getGebouw() {return this->gebouwNaam;}
double Lokaal::getLokaalNummer() {return this->lokaal;}