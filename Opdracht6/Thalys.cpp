//
// Created by User on 29-10-2018.
//

#include "Thalys.h"

Thalys::Thalys() : HogesnelheidsTrein(10.00), Vervoersmiddel("Thalys", 350, 8.55) {}

double Thalys::maxOpbrengstBerekenen(double afstand) {
    double maxOpbrengst = 0;

    maxOpbrengst = this->maxPassagiers*(this->prijsPerKilometer * afstand) + this->extraToeslag;

    return maxOpbrengst;
}