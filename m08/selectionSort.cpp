#include <iostream>
using namespace std;

// This selectionSearch source code is copied from textbook p.475
void selectionSort(int array[], int size)
{
    int startScan, minIndex, minValue;
    for (startScan = 0; startScan < (size - 1); startScan++)
    {
        minIndex = startScan;
        minValue = array[startScan];
        for(int index = startScan + 1; index < size; index++)
        {
            if (array[index] < minValue)
            {
                minValue = array[index];
                minIndex = index;
            }
        }
        array[minIndex] = array[startScan];
        array[startScan] = minValue;
        cout << endl;
        for(int i=0; i<size; i++)
            cout << array[i] << " ";
    }
} 

void showArray(int array[], int size) {
    for(int i=0; i<size; i++) cout << array[i] << ' ';
}

int main() {
    const int SIZE = 10;
    // unsorted array
    int array[] {11, 44, 66, 22, 55, 77, 99, 33, 90, 88};
    cout << "\nOriginal unsorted array contains:\n";
    showArray(array, SIZE);
    
    selectionSort(array, SIZE);
    
    cout << "\nSorted array contains:\n";
    showArray(array, SIZE);
}