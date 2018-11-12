//
// Created by User on 23-10-2018.
//

#include "Intercity.h"

Intercity::Intercity() :Trein() {
    setNaam("Intercity");
    setMaxPassagiers(60);
    setPrijs(4.00);
}

double Intercity::maxOpbrengstBerekenen(double afstand) {
        double maxOpbrengst = 0;
        int passagiers = getPassagiers();
        double prijs = getPrijs();

        maxOpbrengst = passagiers*(prijs * afstand);

        return maxOpbrengst;
}
