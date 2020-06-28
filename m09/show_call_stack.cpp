// address of the variables in 
// (main function) call stack
#include <iostream>
using namespace std;

int main()
{
    char letter = 'a';
    short number = 12;
    float amount = 12.34; 
    // cout << &letter << ", " << sizeof(letter) << endl;
    // 1. cast char pointer as a C-style string
	cout << static_cast<void*>(&letter) << ", " << sizeof(letter) << endl;
	
	// 2. neutralize type (to void)
	void * addr = &letter;
	cout << addr << ", " << sizeof(letter) << endl;
	
	// 3. Use C output function
	printf("%p",&letter);
	cout << endl;
	
    cout << &number << ", " << sizeof(number) << endl;
    cout << &amount << ", " << sizeof(amount) << endl;
    
	// using pointer to access a block of same type variables 
	double p=1.1, q=2.2, r=3.3;
	double* ptr = &p;
	cout << ptr++ << endl << ptr ++ << endl << ptr;
} 