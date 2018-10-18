//
// Created by User on 12-10-2018.
//

#ifndef CLIONPROJECTS_STUDENT_H
#define CLIONPROJECTS_STUDENT_H


#include "Persoon.h"

class Student : public Persoon {

private:
    int studentNummer;

public:
    Student(string name, int age, int studentNummer);

};


#endif //CLIONPROJECTS_STUDENT_H
