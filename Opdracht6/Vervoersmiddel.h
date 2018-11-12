//
// Created by User on 23-10-2018.
//

#ifndef OPDRACHT6_VERVOERSMIDDEL_H
#define OPDRACHT6_VERVOERSMIDDEL_H

#include <string>


class Vervoersmiddel {
public:
    Vervoersmiddel();
    //Vervoersmiddel(std::string naam, int maxPassagiers, double prijsPerKm);
    virtual double maxOpbrengstBerekenen(double afstand) = 0;

    void setNaam(std::string naam);
    void setMaxPassagiers(int aantal);
    void setPrijs(double prijs);
    std::string getName();
    int getPassagiers();
    double getPrijs();

private:
    std::string naam ;
    int maxPassagiers;
    double prijsPerKilometer;
};


#endif //OPDRACHT6_VERVOERSMIDDEL_H
