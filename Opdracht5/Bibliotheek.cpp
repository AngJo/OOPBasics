//
// Created by User on 24-10-2018.
//

#include <iostream>
#include "Bibliotheek.h"
#include <string>
using namespace std;

Bibliotheek::Bibliotheek() {}

Bibliotheek::~Bibliotheek() {cout << "Bibliotheek destructor" << endl; delete boek;}

Bibliotheek::Bibliotheek(const Bibliotheek& bibliotheek) {
    cout << "Bibliotheek copy constructor" << endl;
    boek = new Boek();
    boek->Titel = bibliotheek.boek->Titel;
}

Bibliotheek& Bibliotheek::operator=(const Bibliotheek& anderBieb) {
    cout << "Bibliotheek assignment operator" << endl;
    if (this != &anderBieb){
        if (boek){
            delete boek;
        }
        boek = new Boek(anderBieb.boek->Titel, anderBieb.boek->schrijver, anderBieb.boek->boekID);
    }
    return *this;
}

void Bibliotheek::toonCollectie() {
    cout << "Bibliotheek heeft: " << boek->Titel << " in de collectie" << endl;
}

void Bibliotheek::voegBoekToe(string titel, string schrijver, int id) {
    if(boek){
        delete boek;
    }
    boek = new Boek(titel, schrijver, id);

}

void Bibliotheek::leenUit() {
    cout << "Boek uitlenen" << endl;
    if(boek){
        delete boek;
    }
}