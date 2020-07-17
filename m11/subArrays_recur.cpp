#include <iostream> 
using namespace std; 
  
// Recursive function to print all possible subarrays	
// for given array  
void subArrays(int arr[], int size, int start, int end) { 
	 // Terminal Condition: 
	 // when the end position moved beyond the array.
	 if (end == size ) return; 

	 // Increment the end point and start from 0 position
	else if (start <= end) { 
		// Print subarray between start to end 
		for (int sub = start; sub <= end; sub++)
			cout << arr[sub] << ' '; 
		cout << endl; 

		// Pick new start
		subArrays(arr, size, start+1, end); 
	} 
		// Pick new end
	else subArrays(arr, size, 0, end+1); 
	 
	return; 
} 
  
int main() { 
	int arr[] = {1, 2, 3, 4}; 
	int size = sizeof(arr)/sizeof(arr[0]); 
	
	cout << "Original Array:\n";
	for(int i=0; i<size; i++)
		cout << arr[i] << ' ';
	cout << "\nAll Subarrays:\n"; 
	
	// Pick start & end
	subArrays(arr, size, 0, 0); 
	return 0; 
} 