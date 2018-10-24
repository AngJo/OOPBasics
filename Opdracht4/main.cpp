#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char data;
    char c1;
    int min = 1;

    ifstream infile;
    infile.open("afile.dat");


    infile.seekg(0, infile.end);
    int length = infile.tellg();
    infile.seekg(0, ios::beg);

    for(int n = 0; n < (length - 2); n += 1){
        infile.ignore((length-2)-min);
        c1 = infile.get();
        cout << c1 << "This it the " << (length-2)-n << " char" << endl;
        min ++;
    }




    infile.close();

    return 0;
}