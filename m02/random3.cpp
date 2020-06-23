#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;

int main () {
  int iSecret, iGuess;
  cout << time(0) << endl; 

//  srand (time(0));
    srand(123);
  do {
    cout << "get a number between 1 to 10: ";
    getchar();
    cout << rand() % 10 + 1 << endl;
  } while (true);
}