//
// Created by User on 12-11-2018.
//

#ifndef OPDRACHT1_LOKAAL_H
#define OPDRACHT1_LOKAAL_H
#include <string>
using namespace std;

class Lokaal {
private:
    string gebouwNaam;
    double lokaal;
public:
    Lokaal();
    Lokaal(string naam, double lokaalnummer);
    string getGebouw();
    double getLokaalNummer();
};


#endif //OPDRACHT1_LOKAAL_H
