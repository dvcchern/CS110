#include <iostream>
using namespace std;

int main() {
    // dynamic allocation for one item
    int *iptr = nullptr;
    iptr = new int; 
    
    *iptr = 25;
    cout << "*iptr is " << *iptr; 
    cout << "\nEnter a new value for *iptr: ";
    cin >> *iptr; 
    cout << "*iptr contains: " << *iptr << endl;
    
    // dynamic allocation for an array of size;
    int *iarp = nullptr;
    int size = 10;
    iarp = new int[size]; // treat iarp as a const
    // so we have the starting point of borrowed memory
    
    int *p = iarp; // create a runner p
    cout << "\nNewly allocated iarp[] contains:\n";
    for(int i=0; i<size; i++)
        cout << *(p++) << " ";
    
    // Initialize iarp[] start with user entered value
    p = iarp;
    for(int i=0; i<size; i++)
        *(p++) = *iptr + i;
        
    // Display the updated values inside the iarp[]
    cout << "\n\nUpdated iarp[] contains:\n";
    p = iarp;
    for(int i=0; i<size; i++)
        cout << *(p++) << " ";

    // release the dynamic memory back to system
    delete iptr;
    delete [] iarp;
}