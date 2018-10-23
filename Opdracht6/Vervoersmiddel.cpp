//
// Created by User on 23-10-2018.
//

#include "Vervoersmiddel.h"

Vervoersmiddel::Vervoersmiddel(std::string naam, int maxPassagiers, double prijsPerKm) {
    this->naam = naam;
    this->maxPassagiers = maxPassagiers;
    this->prijsPerKilometer = prijsPerKm;
}