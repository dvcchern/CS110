#include <iostream>
using namespace std;

int main() {
    int points;
    int ship;
    while(true) {
        ship = 0;
        cout << "\n\nWhat is the points: ";
        cin >> points;
        if( 850 <= points ) ship += 500;
        // if( 750 <= points ) ship += 200;
        else if( 750 <= points ) ship += 200;
        // if( 600 <= points ) ship += 50;
        else if( 600 <= points ) ship += 50;
        else ship = 0;
        cout << "points " << points << " award " << ship;
    }
}