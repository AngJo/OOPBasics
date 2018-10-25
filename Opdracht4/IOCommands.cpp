//
// Created by User on 25-10-2018.
//

#include "IOCommands.h"


IOCommands::IOCommands() {

}

void IOCommands::readFileBackwards(ifstream infile) {
    char c1;

    infile.open("afile.dat");


    infile.seekg(0, infile.end);
    int length = infile.tellg();

    for(int n = 1; n < (length); n += 1){
        infile.seekg(-n, ios::end);
        c1 = infile.get();
        cout << c1 << "This it the " << (length-2)-n << " char" << endl;

    }




    infile.close();
}