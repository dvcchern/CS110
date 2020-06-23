#include <iostream>
using namespace std;

int main() {
    int temperature;
    cout << "Etner temperature: ";
    cin >> temperature;
    
    // bad programming style!
    // if (temperature < 20 && temperature > 12) 
    
    // correct (intuitive) way of saying it
    if  ( 12 < temperature  && temperature < 20 ) 
    cout << "The temperature is in the danger zone."; 
    
    // for valid temperatur is on the outside
    if  ( temperature <12 || 20 < temperature ) 
    cout << "The temperature is in the comfort zone."; 
}