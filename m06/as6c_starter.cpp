#include <iostream>
using namespace std;

int main() {
    int sum=0, small=100, input;
    
    cout << "Enter 5 scores: ";
    for(int i=0; i<5; i++) {
        cin >> input; // you need to check the range
        if(input < small) small = input;
        sum += input;
        cout << "Enter another one: ";
    }
    
    // do the calcualtion and deduct the small from sum
    // before displaying it.
    cout << " small: " << small
         << " input: " << input
         << " sum: " << sum;
}