#include <iostream>
using namespace std;

// This binarySearch source code is copied from Pr8-2 of textbook p.462
int binarySearch(const int array[], int size, int value)
{
    int first = 0,              // First array element
        last = size - 1,        // Last array element
        middle,                 // Mid point of search
        position = -1;          // Position of search value
        bool found = false;     // Flag

    while (!found && first <= last)
    {
        middle = (first + last) / 2;     // Calculate mid point
        if (array[middle] == value)      // If value is found at mid
        {
            found = true;
            position = middle;
        }
        else if (array[middle] > value)  // If value is in lower half
            last = middle - 1;
        else
            first = middle + 1;          // If value is in upper half
   }
   return position;
}

void showArray(int array[], int size) {
    for(int i=0; i<size; i++) cout << array[i] << ' ';
}

int main() {
    const int SIZE = 10;
    // sorted list
    int array[] {2, 5, 7, 8, 11, 14, 26, 47, 55, 88};
    int value = 26;
    
    cout << "\nOriginal sorted array contains:\n";
    showArray(array, SIZE);
    
    int position = binarySearch(array, SIZE, value);
    
    if(position > 0) 
        cout << "\nSorted array contains: " << value 
             << " at position " << position << ".\n";
    else
        cout << "Value of " << value << " not inside the array!\n";
}