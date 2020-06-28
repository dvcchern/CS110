#include <iostream>
using namespace std;

int main() {
	short numbers[] = {10, 20, 30, 40, 50};
	
	cout << "The first element of the array is ";
	cout << *numbers << endl;

	cout << "Here are all values in this array:\n";
	const int NUM_COINS = 5;
	
    for (int count = 0; count < NUM_COINS; count++) {
        cout << numbers[count] << " ";
    } 
    cout << "\nUsing pointer to do the same content dump\n";
    for (int count = 0; count < NUM_COINS; count++) {
        short* ptr = &numbers[count];
        cout << *ptr << " ";
    } 
    
    cout << "\nA more efficient way to print an array:\n";
    short* ptr = numbers;
    for (int count = 0; count < NUM_COINS; count++) 
        cout << *ptr++ << " ";
        
    cout << "\nTo point it backward:\n";
    for(int count = NUM_COINS; 0 < count; count-- )
        cout << *(--ptr) << " ";
} 