#include <iostream>
using namespace std;

int main() {
    int a=0, b=10, c=1;
    // if(a<b) {
    //     cout << c++;
    // }
    // a++;
    while (a++<b) {
        cout << c++;
    }
    
    cout << "\nBelow is do-while\n";
    a = 0;
    c = 1;
    do {
        cout << c++;
    } while(a++<b);

}