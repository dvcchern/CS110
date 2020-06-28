#include <iostream>
using namespace std;

void showStatic(); // Function prototype
int main() {
   // Call the showStatic function five times.
   for (int count = 0; count < 5; count++)
      showStatic();
    // {
    //     static int statNum;
    //     cout << "statNum is " << statNum << endl;
    //     statNum++;
    // }
}

void showStatic(){
   static int statNum = 10;
   cout << "statNum is " << statNum << endl;
   statNum++;
}