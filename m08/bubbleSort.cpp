// bubble sort
#include <iostream>
using namespace std;

// this sortArray source code is copied from simple (bubble) sort
// listed on the Gaddis 8th ed. p. 471
void bubbleSort(int array[], int size)
{
    bool swap;
    int temp;
    do
    {
        swap = false;
        for (int count = 0; count < (size - 1); count++)
        {
            if (array[count] > array[count + 1])
            {
                temp = array[count];
                array[count] = array[count + 1];
                array[count + 1] = temp;
                swap = true; 
            }
        }
    } while (swap);
} 

void showArray(int array[], int size) {
    for(int i=0; i<size; i++) cout << array[i] << ' ';
}

int main() {
    const int SIZE = 10;
    // unsorted list
    int array[] {11, 14, 26, 2, 5, 7, 8, 47, 55, 88};
    cout << "\nOriginal array contains:\n";
    showArray(array, SIZE);
    
    bubbleSort(array, SIZE);
    
    cout << "\nSorted array contains:\n";
    showArray(array, SIZE);
}