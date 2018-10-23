//
// Created by User on 23-10-2018.
//

#include "Trein.h"

Trein::Trein(double extraToeslag) : Vervoersmiddel(naam, maxPassagiers, prijsPerKilometer ){
    this->extraToeslag = extraToeslag;
}