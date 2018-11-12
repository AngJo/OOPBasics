//
// Created by User on 12-11-2018.
//

#include "Docent.h"

Docent::Docent() {}
Docent::Docent(string vn, string an, string afk) {
    this->voornaam = vn;
    this->achternaam = an;
    this->afkorting = afk;
}

string Docent::getAfkorting() {return this->afkorting;}
string Docent::getAchteNaam() {return this->achternaam;}
string Docent::getVoorNaam() {return this->voornaam;}
