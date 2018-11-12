//
// Created by User on 12-11-2018.
//

#ifndef OPDRACHT1_VAK_H
#define OPDRACHT1_VAK_H
#include <string>
using namespace std;

class Vak {
private:
    string vakNaam;
    string lesCode;
public:
    Vak();
    Vak(string vakNaam, string lesCode);
    string getVakNaam();
    string getLesCode();

};


#endif //OPDRACHT1_VAK_H
