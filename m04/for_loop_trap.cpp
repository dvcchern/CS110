#include <iostream>
using namespace std;

int main() {
    // for(float f=0; f=1.0; f=f+0.1) {
    //     cout << f << "  ";
    // }
    float f = 0;
    while( f != 1) {
        cout << f << "  ";
        f += 0.1;
    }
}