//
// Created by User on 12-10-2018.
//

#include "Docent.h"

Docent::Docent(string name, int age, string afk) : Persoon(name, age){
    afkorting = afk;
}

string Docent::getAfkorting() {
    return this->afkorting;}