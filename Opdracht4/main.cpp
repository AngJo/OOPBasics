#include <iostream>
#include <fstream>
#include "IOCommands.h"

using namespace std;

int main() {
    //char c1;
    IOCommands coms = IOCommands();
    char line1[100];
    char line2[100];
    int lengthFile1;
    int lengthFile2;
    int n1 = 0;
    int n2 = 0;

    ifstream infile1;
    ifstream infile2;
    ofstream outputFile;

    lengthFile1 = infile1.tellg();
    lengthFile2 = infile2.tellg();

    infile1.open("Text1.txt");
    infile2.open("C:\\Users\\User\\CLionProjects\\OOPBasics\\Opdracht4\\Text2.txt");
    outputFile.open("JoAnnOutputText.txt");

    if (!infile1 || !infile2 || !outputFile){
        cout << "Probleem bij openen file" << endl;
        exit(1);
    }

    //Programma schrijft eerste regel uit beide bestanden maar pakt nog niet de rest
    if (!infile1.eof() || !infile2.eof()){

    while (infile1.peek() != '\n'){
        infile1 >> line1;
        if (n1 >= 1){outputFile << " " << line1;}
        else {outputFile << line1; n1++;}
    }
    outputFile << endl;

    while (infile2.peek() != '\n'){
        infile2 >> line2;
        if (n2 >= 1){outputFile << " " << line2;}
        else {outputFile << line2; n2++;}
    }
    outputFile  << endl;}


    infile1.close();
    infile2.close();
    outputFile.close();


    /*ifstream infile1;
    infile1.open("afile.dat");
    coms.readFileBackwards(infile1);*/




    return 0;
}