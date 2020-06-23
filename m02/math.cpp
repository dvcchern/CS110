#include <iostream>
using namespace std;

int main() {
    cout << "Enter two numbers: ";
    int a, b, sum;
    cin >> a >> b;
    
    sum = a+b;
    cout << a << " + " << b
         << " is " << sum;
}