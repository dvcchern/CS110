// This program demonstrates the prefix and postfix
// modes of the increment and decrement operators.
// Try in different compiler, the result maybe different.

#include <iostream>
using namespace std;

int main()
{
	int num = 4;
	
	cout << num << endl;	// Displays 4
	cout << num++ << endl;  // Displays 4, then adds 1 to num
	cout << num << endl;	// Displays 5
	cout << ++num << endl;  // Adds 1 to num, then displays 6
	cout << endl;			 // Displays a blank line
	
	cout << num << endl;	// Displays 6
	cout << num-- << endl;  // Displays 6, then subtracts 1 from num
	cout << num << endl;	// Displays 5
	cout << --num << endl << endl; // Subtracts 1 from num, then displays 4
	
	// Depending on the compiler, Output maybe different for I/O driver handling
	// as Queue - left to right order; or Stack - right to left order
    num = 4;
	cout << num;
	cout << num++;
	cout << num;
	cout << ++num << endl;	// Displays 6566
	
	cout << num;	
	cout << num--;  
	cout << num;	
	cout << --num << endl; // Displays 4544
	
	// // Condensed in one single statement.
	// num = 4;
	// cout << num << num++ << num << ++num << endl;
	// cout << num << num-- << num << --num << endl; 
	
}