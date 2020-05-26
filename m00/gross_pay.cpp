#include <iostream>
using namespace std;

int main()
{ 
    // gross pay = hours * rate
    double hours, rate, pay;
    cout << "Enter hours: ";
    cin >> hours;
    cout << "Enter rate: ";
    cin >> rate;
    cout << "The gross pay is " << hours * rate;
}