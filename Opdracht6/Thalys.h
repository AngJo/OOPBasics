//
// Created by User on 29-10-2018.
//

#ifndef OPDRACHT6_THALYS_H
#define OPDRACHT6_THALYS_H


#include "HogesnelheidsTrein.h"

class Thalys : public HogesnelheidsTrein {
    //Base Class Vervoersmiddel is already a base-class of Hogesnelheidstrein
public:
    Thalys();

    double maxOpbrengstBerekenen(double afstand) override;

};


#endif //OPDRACHT6_THALYS_H
