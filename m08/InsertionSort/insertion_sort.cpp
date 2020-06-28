// This program demonstrates the Insertion Sort 
// using the insertNode function (class method.)
#include <iostream>
#include <vector>
#include "NumberList.h"
using namespace std;

int main()
{
	vector<double> src={4.4, 2.2, 8.8, 9.9, 3.3, 1.1, 7.7, 5.5, 6.7, 0.1};

	// Display src
	for(auto x:src) cout << x << " ";
		
	// Define a NumberList object.
	NumberList list;
	
	// Build the list with some values.
	while(!src.empty()) {
		list.insertNode(src.back());
		src.pop_back();
	}

	cout << "\nThe insertion sorted list:\n";
	list.displayList();
	return 0;
}