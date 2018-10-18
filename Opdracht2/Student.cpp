//
// Created by User on 12-10-2018.
//

#include "Student.h"

Student::Student(string name, int age, int studNummer) : Persoon (name, age){
    studentNummer = studNummer;
}

int Student::getStudentNummer() {
    return this->studentNummer;}
