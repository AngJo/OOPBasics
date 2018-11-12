//
// Created by User on 24-10-2018.
//

#ifndef OPDRACHT5_BIBLIOTHEEK_H
#define OPDRACHT5_BIBLIOTHEEK_H
#pragma once

#include "Boek.h"

class Bibliotheek {
public:
    Bibliotheek(); //default constructor
    virtual ~Bibliotheek(); //deconstructor
    Bibliotheek(const Bibliotheek& bibliotheek); // Copy Constructor
    Bibliotheek& operator=(const Bibliotheek&);

    void toonCollectie();
    void voegBoekToe(string titel, string schrijver, int id);
    void leenUit();

private:
    Boek* boek = new Boek();


};


#endif //OPDRACHT5_BIBLIOTHEEK_H
