#include <iostream>
using namespace std;

int main() {
    const int LIMIT = 10; // pos 2 - boundary constant
    int count = 0; // pos 1 - declare and init counter
    while(count < LIMIT) { // pos 2 - boundary evaluation
        cout << count << " ";
        count ++; // pos 3 - increment counter
    }
    
    cout << endl;
    // Equivelant Counting Loop
    for(int count = 0; count < LIMIT; count ++) {
        cout << count << " ";
    }
}