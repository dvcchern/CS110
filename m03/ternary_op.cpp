#include <iostream>
using namespace std;

int main() {
    int x=3, y=4;
    // if (x >y )
    //     cout << x << " is greater than " << y;
    // else
    //     cout << x << " is less than " << y;
    cout << x 
         << ((x >y) 
                ? " greater than "
                :" less than ")
         << y;
}