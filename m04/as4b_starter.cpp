// Right alignment to fixed points 
#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    int option; // or char ch
    bool flag = true;
    while(flag) {
        cout << "        Math Tutor Menu\n"
             << "------------------------------\n"
             << "1. Addition problem\n"
             << "2. Subtraction problem\n"
             << "3. Multiplication problem\n"
             << "4. Division problem\n"
             << "5. Quit this program\n"
             << "------------------------------\n"
             << "Enter your choice (1-5): ";
        cin >> option;
        switch (option){ // ch
            case 1: // '1'
                cout << option << endl;
                break;
            case 2:
                cout << option << endl;
                break;
            case 5: // to get cout
                flag = false;
                break;
            default:
                cout << "wrong option\n";
        }
    }
        
    
}