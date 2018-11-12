//
// Created by User on 29-10-2018.
//

#include "Thalys.h"

Thalys::Thalys() : HogesnelheidsTrein(10.00) {
    setNaam("Thalys");
    setMaxPassagiers(350);
    setPrijs(8.55);
}

double Thalys::maxOpbrengstBerekenen(double afstand) {
    double maxOpbrengst = 0;
    int passagiers = getPassagiers();
    double prijs = getPrijs();


    maxOpbrengst = passagiers*(prijs * afstand) + this->extraToeslag;

    return maxOpbrengst;
}