// This program demonstrates an enumerated data type.
#include <iostream>
#include <iomanip>
using namespace std;

enum Weekdays { MONDAY=0, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY };
const string DayName[] = { "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY" };

int main() {
	const int NUM_DAYS = 5;	 // The number of weekdays
	double rainfall[NUM_DAYS]; // To hold rainfall for each day

	// Get the rainfall for each weekday.
	for (int day = MONDAY; day <= FRIDAY; day++) {
		cout << "Enter the sales for " << DayName[day] << ": ";
		cin >> rainfall[day];
	}
	
	// Output the rainfall of each day
	cout << "\nThe week's rainfalls are:\n";
	for(int day = MONDAY; day <= FRIDAY; day++) 
	    cout << setw(12) << right << DayName[day]
	         << setw(8) << fixed << setprecision(2) 
	         << right << rainfall[day] << endl;
}