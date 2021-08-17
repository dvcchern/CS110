// This program displays a list of numbers and
// their squares.
#include <iostream>
using namespace std;

int main()
{
	const int MIN_NUMBER = 1,	// Starting number to square
			MAX_NUMBER = 10;  // Maximum number to square

	int num = MIN_NUMBER;		 // <---------- Counter

	cout << "Number Number Squared\n";
	cout << "-------------------------\n";
	while (num <= MAX_NUMBER)	// <-----------
	{
		cout << num << "\t\t" << (num * num) << endl;
		num++; // <-------- Increment the counter.
	}

	cout << "Number Number Squared\n";
	cout << "-------------------------\n";
	for (int n=MIN_NUMBER; n <= MAX_NUMBER; n++ )	
		cout << n << "\t\t" << (n * n) << endl;

	return 0;
}
