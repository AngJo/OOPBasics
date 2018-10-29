//
// Created by User on 23-10-2018.
//

#include "Intercity.h"

Intercity::Intercity() :Trein(), Vervoersmiddel("Intercity", 60, 4.00) {}

double Intercity::maxOpbrengstBerekenen(double afstand) {
        double maxOpbrengst = 0;

        maxOpbrengst = this->maxPassagiers*(this->prijsPerKilometer * afstand);

        return maxOpbrengst;
}
