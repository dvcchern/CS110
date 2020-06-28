#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream fin;
    fin.open("text.txt");
    string first, second, third;
    fin >> first >> second >> third;
    cout << first << endl
         << second << endl
         << third;
         
    cout << "here is the 1 + '1': "
         << 1 + 'a';
}