//
// Created by User on 24-10-2018.
//

#ifndef OPDRACHT5_BOEK_H
#define OPDRACHT5_BOEK_H

#pragma once

#include <xstring>

using namespace std;

class Boek {
public:
    Boek(); //default constructor
    string Titel;
    string schrijver;
    int boekID;
    Boek(string titel, string schrijver, int id); //constructor
    virtual ~Boek(); //destructor
    string getTitel();
    string getSchrijver();
    int getID();
};


#endif //OPDRACHT5_BOEK_H
