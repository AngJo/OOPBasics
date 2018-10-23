//
// Created by User on 18-10-2018.
//

#ifndef OPDRACHT3_KOFFIEAUTOMAAT_H
#define OPDRACHT3_KOFFIEAUTOMAAT_H

#include "Muntgeld.h"
#include "VijftigCent.h"
#include "EenEuro.h"
#include "KoffieMuntje.h"

class KoffieAutomaat {
private:
    double saldo = 0.00;
    bool cappu = false;
    bool koffie = false;
    bool espresso = false;

public:
    void InworpControleren(double inworp);
    void SaldoUpdate();
    double getSaldo();

    void MuntgeldAccepteren(VijftigCent vijftig);
    void MuntgeldAccepteren(EenEuro euro);
    void MuntgeldAccepteren(KoffieMuntje munt);

    void KoffieGeven();
};


#endif //OPDRACHT3_KOFFIEAUTOMAAT_H
