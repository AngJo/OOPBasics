//
// Created by User on 23-10-2018.
//

#include "Vervoersmiddel.h"

/*Vervoersmiddel::Vervoersmiddel(std::string naam, int maxPassagiers, double prijsPerKm) {
    this->naam = naam;
    this->maxPassagiers = maxPassagiers;
    this->prijsPerKilometer = prijsPerKm;
}*/

Vervoersmiddel::Vervoersmiddel() {}

void Vervoersmiddel::setNaam(std::string naam) {
    this->naam = naam;
}

void Vervoersmiddel::setMaxPassagiers(int aantal) {
    this->maxPassagiers = aantal;
}

void Vervoersmiddel::setPrijs(double prijs) {
    this->prijsPerKilometer = prijs;
}

std::string Vervoersmiddel::getName() {
    return this->naam;
}

int Vervoersmiddel::getPassagiers() {
    return this->maxPassagiers;
}

double Vervoersmiddel::getPrijs() {
    return this->prijsPerKilometer;
}