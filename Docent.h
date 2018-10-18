//
// Created by User on 12-10-2018.
//

#ifndef CLIONPROJECTS_DOCENT_H
#define CLIONPROJECTS_DOCENT_H


#include "Persoon.h"

class Docent : public Persoon{
private:
    string afkorting;

public:
    Docent(string naam, int leeftijd, string afk);
};


#endif //CLIONPROJECTS_DOCENT_H
