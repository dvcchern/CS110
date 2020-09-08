#include <iostream>
using namespace std;

int main() {
    cout << "Enter your average gpa: ";
    double gpa, scholarship = 0;
    cin >> gpa;
    if(3.0 <= gpa) 
        scholarship += 500;
    else if(2.0 <= gpa)
        scholarship += 300;
    else if(1.0 <= gpa)
        scholarship += 100;
    else;
    cout << "You are awarded with $" << scholarship;
}