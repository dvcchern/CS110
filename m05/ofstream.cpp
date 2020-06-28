#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream fout;
    fout.open("output.txt");
    fout << "San " << "Ramon " << "Campus " << endl;
    fout << "San Ramon Campus" << endl;
    fout << "San" << endl
         << "Ramon" << endl
         << "Campus" << endl;
    fout << "San\nRamon\nCampus";
    fout.close();
}
