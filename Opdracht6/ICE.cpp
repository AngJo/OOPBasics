//
// Created by User on 29-10-2018.
//

#include "ICE.h"

ICE::ICE(): HogesnelheidsTrein(5.00) {
    setNaam("ICE");
    setMaxPassagiers(298);
    setPrijs(5.60);
}

double ICE::maxOpbrengstBerekenen(double afstand) {
    double maxOpbrengst = 0;
    int passagiers = getPassagiers();
    double prijs = getPrijs();

    maxOpbrengst = passagiers*(prijs* afstand) + this->extraToeslag;

    return maxOpbrengst;
}