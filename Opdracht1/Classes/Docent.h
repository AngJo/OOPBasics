//
// Created by User on 12-11-2018.
//

#ifndef OPDRACHT1_DOCENT_H
#define OPDRACHT1_DOCENT_H
#include <string>
using namespace std;

class Docent {
private:
    string voornaam;
    string achternaam;
    string afkorting;
public:
    Docent();
    Docent(string vn, string an, string afk);
    //void setValues(string vn, string an, string afk);
    string getVoorNaam();
    string getAchteNaam();
    string getAfkorting();


};


#endif //OPDRACHT1_DOCENT_H
