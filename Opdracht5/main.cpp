#include <iostream>
#include "Boek.h"
#include "Bibliotheek.h"
using namespace std;

void geefInformatie(Bibliotheek* bieb){
    cout << "Informatie ontvangen" << endl;
    bieb->toonCollectie();

    bieb->voegBoekToe("Boek drie", "Schrijfster 3", 3);
    bieb->toonCollectie();
}

void destructorVoorbeeld(){
    Bibliotheek* bieb = new Bibliotheek();
    bieb->toonCollectie();

    bieb->voegBoekToe("Boek twee", "Schrijver 2", 2);
    bieb->toonCollectie();

    cout << "Informatie doorgeven" << endl;
    geefInformatie(bieb);

    cout << "Informatie teruggekregen" << endl;

    bieb->toonCollectie();

    delete bieb;

    int c;
    cin >> c;
}

void copyVoorbeeld(){
    cout << "---Bibliotheek 1" << endl;
    Bibliotheek bieb1 = Bibliotheek();
    bieb1.toonCollectie();

    bieb1.voegBoekToe("Boek A", "Schrijver A", 1);
    cout << "---Bibliotheek 1" << endl;
    bieb1.toonCollectie();

    cout << "--- Bibliotheek 2" << endl;
    Bibliotheek bieb2 = bieb1;
    bieb2.toonCollectie();

    cout << "---Bibliotheek 1" << endl;
    bieb1.voegBoekToe("Boek B", "Schrijfster B", 2);
    bieb1.toonCollectie();

    cout << "---Bibliotheek 2" << endl;
    bieb2.toonCollectie();
}

void AssignmentVoorbeeld(){
    cout << "---Bieb 1" << endl;
    Bibliotheek bieb1 = Bibliotheek();
    bieb1.toonCollectie();

    bieb1.voegBoekToe("Boek A", "Schrijver 1", 1);
    cout << "---Bieb 1" << endl;
    bieb1.toonCollectie();

    Bibliotheek bieb2;
    bieb2 = bieb1;
    cout << "---Bieb 2" << endl;
    bieb2.toonCollectie();

    bieb1.voegBoekToe("Boek B", "Schrijver 2", 2);
    cout << "---Bieb 1" << endl;
    bieb1.toonCollectie();

    cout << "---Bieb 2" << endl;
    bieb2.toonCollectie();
}

int main() {

    //Code veroorzaakt een exit 255 en windows die aangeeft dat de programma niet meer werkt
    //Maak boek aan op de heap
    Bibliotheek* bieb = new Bibliotheek();
    bieb->voegBoekToe("Boek twee", "Schrijver 2", 2);
    bieb->toonCollectie();

    //Boek uitlenen
    bieb->leenUit();
    bieb->toonCollectie();

    delete bieb;
    return 0;
}