//
// Created by User on 12-10-2018.
//

#ifndef CLIONPROJECTS_PERSOON_H
#define CLIONPROJECTS_PERSOON_H

#include <xstring>

using namespace std;

class Persoon {




public:
    Persoon(string name, int age);
    int leeftijd;
    string naam;
    virtual int getAge();
    virtual string getName();


};


#endif //CLIONPROJECTS_PERSOON_H
