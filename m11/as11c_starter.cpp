// This program demonstrates an enumerated data type.
#include <iostream>
#include <iomanip>
using namespace std;

enum Day { MONDAY=0, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY };
const string DayName[] = { "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY" };

int main() {
	const int NUM_DAYS = 5;	 // The number of weekdays
	double rainfall[NUM_DAYS]; // To hold rainfall for each day

	// Get the rainfall for each weekday.
	for (int index = MONDAY; index <= FRIDAY; index++) {
		cout << "Enter the sales for " << DayName[index] << ": ";
		cin >> rainfall[index];
	}
	
	// Output the rainfall of each day
	cout << "\nThe week's rainfalls are:\n";
	for(int index = MONDAY; index <= FRIDAY; index++) 
	    cout << setw(12) << right << DayName[index]
	         << setw(8) << fixed << setprecision(2) 
	         << right << rainfall[index] << endl;
}