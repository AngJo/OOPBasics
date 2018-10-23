#include <iostream>

#include "VijftigCent.h"
#include "EenEuro.h"
#include "KoffieMuntje.h"
#include "KoffieAutomaat.h"
#include <string>

int main() {

    double ingeworpenMunt;
    int verdergaanKeuze;
    string koffieKeuze;


    KoffieAutomaat automaat = KoffieAutomaat();

    std::cout << "Worp een munt in. Kies uit '0.50', '1.00' of '5.00'. Voer 0 in om te stoppen." << std::endl;
    std::cin >> ingeworpenMunt;

    if (ingeworpenMunt == 0){return 0;}
    else{
        automaat.InworpControleren(ingeworpenMunt);
        automaat.KoffieGeven();

        std::cout << "Wilt u een keuze maken voer 1 in. Wilt u meer saldo toevoegen voer 2 in." <<std::endl;
        std::cin >> verdergaanKeuze;

        if (verdergaanKeuze == 1 && automaat.getSaldo() != 0)
        {
            std::cout << "Maak alstublieft een keuze." <<std::endl;
            std::cin >> koffieKeuze;
            std::cout << "Alstublieft, hier is uw: " << koffieKeuze <<std::endl;
        }


    }
}