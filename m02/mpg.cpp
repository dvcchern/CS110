#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    double tank, distance, mpg;
    cout << "Tank volume: ";
    cin >> tank;
    cout << "Distance: ";
    cin >> distance;
    mpg = distance / tank;
    cout << fixed << setprecision(2) 
         << "\nMiles per Gallon: " << mpg;
}