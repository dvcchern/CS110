#include <iostream>
using namespace std;

// This linearSearch source code is based on 
// the searchList() function from the textbook p.458.
int linearSearch(const int list[], int size, int value)
{
    int index = 0; // Used as a subscript to search array
    int position = -1;
    bool found = false; // Flag to indicate if the value was found
    while (index < size && !found)
    {
        if (list[index] == value) // If the value is found
        {
            found = true; // Set the flag
            position = index; // Record the value's subscript
        }
        index++; // Go to the next element
    }
    return position; // Return the position, or −1
}

int main() {
    // unsorted list
    int list[] {11, 14, 26, 2, 5, 7, 8, 47, 55, 88};
    int SIZE = 10, value = 26;
    int result = linearSearch(list, SIZE, value);
    if(result)
        cout << "Found the item with value of " 
             << value << " on location " << result << endl;
    else
        cout << "list does not contain an item with the value of " << value;
}