/* srand example */
#include <cstdio>      /* NULL */
#include <cstdlib>     /* srand, rand */
#include <ctime>       /* time */
#include <iostream>
using namespace std;

int main ()
{ 
  // 1st thing to seed with what is time now
  // i.e. time from when UNIX 0 time, 0th second of 1970
  // srand (time(NULL)); 
  srand (1); 
  
  // the following is to generate a random number between 0 - 99
  // because it is zero based, the remainder of divide by 100 
  // printf ("First number: %d\n", rand()%100);
  for (int i=0; i<10; i++)
    cout << rand()%100 << endl;
}
