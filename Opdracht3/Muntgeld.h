//
// Created by User on 18-10-2018.
//

#ifndef OPDRACHT3_MUNTGELD_H
#define OPDRACHT3_MUNTGELD_H

#include <xstring>

using namespace std;

class Muntgeld {


public:
    Muntgeld(string naam, float waarde);
    float waarde;
    string naam;
    virtual string getNaam();
    void setNaam(string naam);
    void setWaarde(float waarde);
    virtual float getWaarde();
};


#endif //OPDRACHT3_MUNTGELD_H
