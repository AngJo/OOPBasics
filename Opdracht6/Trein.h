//
// Created by User on 23-10-2018.
//

#ifndef OPDRACHT6_TREIN_H
#define OPDRACHT6_TREIN_H


#include "Vervoersmiddel.h"

class Trein : public Vervoersmiddel{
public:
    double extraToeslag;
    Trein(double extraToeslag);
};


#endif //OPDRACHT6_TREIN_H
