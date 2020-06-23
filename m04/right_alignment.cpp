#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a=1.234, b=345.6;
    cout << fixed << setprecision(2)
         << setw(8) << a << endl
         << setw(8) << b;
}