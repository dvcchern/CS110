#include <iostream>
using namespace std;

int main()
{
    // area = pow(4.0, 2.0); 
    // area = 4.0 ^ 2.0;
    cout << 5 + 2 * 4 << endl // 13 
         << 10 / 2 - 3 << endl // 2
         << 8 + 12 * 2 - 4 << endl // 28
         << 4 + 17 % 2 - 1 << endl // 4
         << (6 - 3) * 2 + 7 -1 << endl; // 6
         
    // overflow example: 255 is 0xFF, 256 0x100
    tiny int i = 256;  // tiny int is one byte integer
    cout << i ; // it will be outputing as 0!
    
    // underflow example: 2 bytes fixed floating number
    // first byte is whole number 2nd byte is fraction
    tiny float f= 11.01;
    cout << f/2; // 5.5005 <== 5.500 will be store and 0.0005 will be lost
    return 0;
}
