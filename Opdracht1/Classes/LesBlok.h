//
// Created by User on 12-11-2018.
//

#ifndef OPDRACHT1_LESBLOK_H
#define OPDRACHT1_LESBLOK_H

#include <string>
#include "Vak.h"
#include "Docent.h"
#include "Klas.h"
#include "Lokaal.h"
using namespace std;

class LesBlok {
private:
    string datum;
    string beginTijd;
    string eindTijd;
public:
    LesBlok(); //constructor
    void setValues(string datum, string bTijd, string eTijd);
    void combineElements(Vak vak, Docent doc, Klas klas, Lokaal lok);
    //getters
    string getDate();
    string getBeginTijd();
    string getEindTijd();

};


#endif //OPDRACHT1_LESBLOK_H
