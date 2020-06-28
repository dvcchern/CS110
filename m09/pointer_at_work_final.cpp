// Illustration for Tutorial 9D
#include <iostream>
using namespace std;

void getNumber(int *ptr) {
    cout << "Enter an integer number: ";
    cin >> *ptr; 
}

void doubleNumber(int *ptr) {
    *ptr *= 2;
}

int main(){
    int number;
    int *ptr = &number;

    getNumber(ptr);
    doubleNumber(ptr);
    cout << "After doubling is " << *ptr << endl;
}