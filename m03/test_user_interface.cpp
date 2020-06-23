#include <iostream>
using namespace std;

int main() {
    int input;
    string name;
    
    cout << "1. Add a name to the list.\n"
         << "2. Remove a name from the list.\n"
         << "3. Change a name in the list.\n"
         << "4. Print the list.\n"
         << "5. Quit the program.\n";

    while(true) {
        cout << "\nEnter your option: ";
        cin >> input;
        if(input == 1) {
            cout << "Enter a name: ";
            cin >> name;
            cout << "name for the list is " << name << endl;
        }
        else if ( 2 <= input && input <= 4 )
            cout << "legal entries!\n";
        else if( input == 5 ) break;
        else 
            cout << "Illegal entry, try again!\n";
    }
    cout << "Exiting the program!";
         
    
}