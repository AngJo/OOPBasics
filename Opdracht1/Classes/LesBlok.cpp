//
// Created by User on 12-11-2018.
//

#include "LesBlok.h"

LesBlok::LesBlok() {
    //default constructor
}

void LesBlok::setValues(string datum, string bTijd, string eTijd) {
    //sets values for private members
    this->datum = datum;
    this->beginTijd = bTijd;
    this->eindTijd = eTijd;
}

/*void LesBlok::combineElements(Vak vak, Docent doc, Klas klas, Lokaal lok) {
    ?? Je moet alle vier kunnen koppelen aan een unieke datum, begintijd en eindtijd
}*/

string LesBlok::getDate() {
    return this->datum;
}

string LesBlok::getBeginTijd() {
    return this->beginTijd;
}

string LesBlok::getEindTijd() {
    return this->eindTijd;
}