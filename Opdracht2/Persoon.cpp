//
// Created by User on 12-10-2018.
//

#include "Persoon.h"


int Persoon::getAge() {
    return this->leeftijd;
}

string Persoon::getName() {
    return this->naam;
}

Persoon::Persoon(string name, int age) {
    naam = name;
    leeftijd = age;

}
