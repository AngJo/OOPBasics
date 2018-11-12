//
// Created by User on 23-10-2018.
//

#ifndef OPDRACHT6_INTERCITY_H
#define OPDRACHT6_INTERCITY_H


#include "Trein.h"

class Intercity : public Trein{
public:
    Intercity();
    double maxOpbrengstBerekenen(double afstand) override;
};


#endif //OPDRACHT6_INTERCITY_H
