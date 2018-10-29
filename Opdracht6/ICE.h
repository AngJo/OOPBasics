//
// Created by User on 29-10-2018.
//

#ifndef OPDRACHT6_ICE_H
#define OPDRACHT6_ICE_H


#include "HogesnelheidsTrein.h"

class ICE : public HogesnelheidsTrein, public Vervoersmiddel{
    //Warning: ICE base-class Vervoersmiddel, is already a base-class of Hogesnelheidstrein
public:
    ICE();
    double maxOpbrengstBerekenen(double afstand) override;
};


#endif //OPDRACHT6_ICE_H
