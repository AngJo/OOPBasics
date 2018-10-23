//
// Created by User on 18-10-2018.
//

#ifndef OPDRACHT3_MUNTGELD_H
#define OPDRACHT3_MUNTGELD_H

#include <xstring>

using namespace std;

class Muntgeld {


public:
    Muntgeld(string naam, double waarde);
    double waarde;
    string naam;
    virtual string getNaam();
    virtual double getWaarde();
};


#endif //OPDRACHT3_MUNTGELD_H
