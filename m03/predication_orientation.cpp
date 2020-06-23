#include <iostream>
using namespace std;

int main() {
    int temp;
    cout << "Enter temperaures: ";
    cin >> temp;
    // if (temp < 20 || temp > 12)
    if( 12 < temp && temp < 20)
        cout << "The temperature is in the comfort zone."; 
    else cout << "Warning, turn on the air condition.";
}