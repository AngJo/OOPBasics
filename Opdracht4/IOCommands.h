//
// Created by User on 25-10-2018.
//
#include <fstream>
#include <iostream>

using namespace std;
#ifndef OPDRACHT4_IOCOMMANDS_H
#define OPDRACHT4_IOCOMMANDS_H


class IOCommands {
public:
    IOCommands();
    void readFileBackwards(ifstream infile);
    void readTwoFiles(ifstream infile1, ifstream infile2);
};


#endif //OPDRACHT4_IOCOMMANDS_H
