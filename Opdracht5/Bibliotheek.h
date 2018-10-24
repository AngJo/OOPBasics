//
// Created by User on 24-10-2018.
//

#ifndef OPDRACHT5_BIBLIOTHEEK_H
#define OPDRACHT5_BIBLIOTHEEK_H


#include "Boek.h"

class Bibliotheek {
public:
    Bibliotheek();

    void toonCollectie();
    void leenBoekUit();
    void voegBoekToe(Boek boek);

private:
    Boek boek = Boek("Boek Een", "Scholier", 1);


};


#endif //OPDRACHT5_BIBLIOTHEEK_H
