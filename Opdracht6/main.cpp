#include <iostream>
#include <string>
#include "Intercity.h"
#include "ICE.h"
#include "Thalys.h"


int main() {

    Intercity ic = Intercity();
    ICE ice = ICE();
    Thalys tha = Thalys();

    std::cout << "Maximaal Opbrengst voor " << ic.getName() << ":" << ic.maxOpbrengstBerekenen(56.50) << std::endl;

    std::cout << "Maximaal Opbrengst voor " << ice.getName() << ":" << ice.maxOpbrengstBerekenen(56.50) << std::endl;

    std::cout << "Maximaal Opbrengst voor " << tha.getName() << ":" << tha.maxOpbrengstBerekenen(56.50) << std::endl;
    return 0;
}