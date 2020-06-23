#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    double num, sum=0, average;
    int count = 0;
    cout << "Read random.txt file.\n";
    ifstream inputFile;
    inputFile.open("random.txt");
    while (inputFile) {
        inputFile >> num;
        sum += num;
        count ++;
    }
    cout << "\nCount of the numbers: " << count
         << "\nSum of the numbers: " << sum;
    
    inputFile.close();
}