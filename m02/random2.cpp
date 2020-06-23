// This program demonstrates random numbers.
#include <iostream>
#include <cstdlib>   // rand and srand
#include <ctime>     // For the time function
using namespace std;

int main()
{
   // Get the system time.
   unsigned seed = time(0);
   
   // Different ways to Seed the random number generator.
  srand(seed);
// srand(123); // fixed sequence of normal distribution
   
   // Display three random numbers.
   cout << rand()%50 +1  << endl;
   cout << rand()%50 +1 << endl;
   cout << rand()%50 +1 << endl;
   return 0;
}