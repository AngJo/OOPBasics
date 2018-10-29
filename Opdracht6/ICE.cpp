//
// Created by User on 29-10-2018.
//

#include "ICE.h"

ICE::ICE(): HogesnelheidsTrein(5.00), Vervoersmiddel("ICE", 298, 5.60) {}

double ICE::maxOpbrengstBerekenen(double afstand) {
    double maxOpbrengst = 0;

    maxOpbrengst = this->maxPassagiers*(this->prijsPerKilometer * afstand) + this->extraToeslag;

    return maxOpbrengst;
}