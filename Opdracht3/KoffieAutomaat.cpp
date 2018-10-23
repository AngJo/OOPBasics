//
// Created by User on 18-10-2018.
//

#include <iostream>
#include "KoffieAutomaat.h"
#include "EenEuro.h"
#include "VijftigCent.h"
#include "KoffieMuntje.h"

double KoffieAutomaat::getSaldo() {
    return this->saldo;
}

void KoffieAutomaat::InworpControleren(double inworp) {
    VijftigCent vijftig = VijftigCent();
    EenEuro euro = EenEuro();
    KoffieMuntje munt = KoffieMuntje();

    //Check welk munt ingeworpen is
    if (inworp == munt.waarde){
        std::cout << "Ingeworpen Munt is Koffiemuntje" << std::endl;
        MuntgeldAccepteren(munt);}

    else if (inworp == vijftig.waarde)
    {
        std::cout << "Ingeworpen Munt is Vijftig" << std::endl;
        MuntgeldAccepteren(vijftig);
    }
    else if (inworp == euro.waarde){
        std::cout << "Ingeworpen Munt is Euro" << std::endl;
        MuntgeldAccepteren(euro);
    }

    SaldoUpdate();
}
void KoffieAutomaat::MuntgeldAccepteren(EenEuro euro) {
    saldo += euro.getWaarde();
}

void KoffieAutomaat::MuntgeldAccepteren(KoffieMuntje munt) {
    //enable all coffee
    cappu = true;
    koffie = true;
    espresso = true;
}

void KoffieAutomaat::MuntgeldAccepteren(VijftigCent vijftig) {
    saldo += vijftig.getWaarde();
}

void KoffieAutomaat::SaldoUpdate() {
    if (saldo >= 0.50)
    {espresso = true;}

    if (saldo >= 1.00){
        cappu = true;
    }

    if (saldo >= 2.00){
        koffie = true;
    }
}
void KoffieAutomaat::KoffieGeven() {

    std::cout << "Huidige Saldo: " << saldo << std::endl;
    std::cout << "Beschikbare koffie: " << std::endl;

    if (espresso == true){std::cout << "Espresso" <<std::endl;}
    if (cappu == true) {std::cout << "Cappuccino" << std::endl;}
    if (koffie == true) {std::cout << "Koffie" << std::endl;}


}