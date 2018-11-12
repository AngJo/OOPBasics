//
// Created by User on 24-10-2018.
//

#include "Boek.h"
#include <iostream>

Boek::Boek(){}

Boek::Boek(string titel, string schrijver, int id) {
    this->Titel = titel;
    this->schrijver = schrijver;
    this->boekID = id;
}

Boek::~Boek() {std::cout << "Boek: destructor" << std::endl;}

string Boek::getTitel() {
    return this->Titel;
}

string Boek::getSchrijver() {
    return this->schrijver;
}

int Boek::getID() {
    return this->boekID;
}