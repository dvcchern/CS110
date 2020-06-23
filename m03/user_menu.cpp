#include <iostream>
using namespace std;

int main() {
    string name;
    int input = 5;
    cout<< "\n1. Add a name to the list."
        << "\n2. Remove a name from the list."
        << "\n3. Change a name in the list."
        << "\n4. Print the list."
        << "\n5. Quit the program.\n";
        // << "\n5. Quit the program.\nEnter your option: ";
    while(true) 
    {
        cout << "\nEnter your option: ";
        cin >> input;
        if(input == 1)
        {
            cout << "please enter the name: ";
            cin >> name;
            cout << "name is " << name << endl;
        }
        else if(input == 5) break;

        else if( 2<= input && input <= 4 )
            cout << "legal input!";
        else 
            cout << "you have entered an ivalid input!";
    }
    cout << "exit from the program!";
    return 0;
}