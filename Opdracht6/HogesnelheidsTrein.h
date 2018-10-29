//
// Created by User on 23-10-2018.
//

#ifndef OPDRACHT6_HOGESNELHEIDSTREIN_H
#define OPDRACHT6_HOGESNELHEIDSTREIN_H


#include "Trein.h"

class HogesnelheidsTrein : public Trein {
public:

    double extraToeslag;
    HogesnelheidsTrein(double extraToeslag);
    virtual double maxOpbrengstBerekenen(double afstand)=0;
};


#endif //OPDRACHT6_HOGESNELHEIDSTREIN_H
