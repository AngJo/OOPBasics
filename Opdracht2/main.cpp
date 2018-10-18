#include <iostream>

#include "Docent.h"
#include "Student.h"
#include "Persoon.h"
#include <string>
int main() {

    Student stud = Student("Bakker Bart", 17, 23405);
    Docent doc = Docent("Roos", 34, "Svs");

    std::cout << "Student Naam: " << stud.getName() << std::endl;
    std::cout << "Student Leeftijd: " << stud.getAge() << std::endl;
    std::cout << "Studentnummer: " << stud.getStudentNummer() << std::endl;
    std::cout << "Docent Naam: " << doc.getName() << std::endl;
    std::cout << "Docent Leeftijd: " << doc.getAge() << std::endl;
    std::cout << "Docent Afkorting: " <<doc.getAfkorting() <<std::endl;



    return 0;
}