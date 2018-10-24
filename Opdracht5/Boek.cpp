//
// Created by User on 24-10-2018.
//

#include "Boek.h"

Boek::Boek(string titel, string schrijver, int id) {
    this->Titel = titel;
    this->schrijver = schrijver;
    this->boekID = id;
}

string Boek::getTitel() {
    return this->Titel;
}

string Boek::getSchrijver() {
    return this->schrijver;
}

int Boek::getID() {
    return this->boekID;
}