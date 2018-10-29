//
// Created by User on 23-10-2018.
//

#ifndef OPDRACHT6_VERVOERSMIDDEL_H
#define OPDRACHT6_VERVOERSMIDDEL_H

#include <string>

class Vervoersmiddel {
public:
    static std::string naam ;
    static int maxPassagiers;
    static double prijsPerKilometer;
    Vervoersmiddel(std::string naam, int maxPassagiers, double prijsPerKm);
    virtual double maxOpbrengstBerekenen(double afstand) = 0;
};


#endif //OPDRACHT6_VERVOERSMIDDEL_H
