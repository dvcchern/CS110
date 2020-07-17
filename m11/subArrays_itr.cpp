#include <iostream>
using namespace std; 
  
// Prints all subarrays in arr[0..size-1] 
void subArrays(int arr[], int size) { 
	// Pick start 
	for (int start=0; start <size; start++) { 
		// Pick end
		for (int end=start; end<size; end++) {  
			// Print subarray between start to end
			for (int sub=start; sub<=end; sub++) 
				cout << arr[sub] << " "; 
			cout << endl; 
		} 
	} 
} 
  
// Driver program 
int main() { 
	int arr[] = {1, 2, 3, 4}; 
	int size = sizeof(arr)/sizeof(arr[0]); 
	cout << "Original Array:\n";
	for(int i=0; i<size; i++)
		cout << arr[i] << ' ';
	cout << "\nAll Subarrays:\n"; 
	subArrays(arr, size); 
} 