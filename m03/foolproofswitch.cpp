#include <climits>
#include <iostream>
#include <sstream>
using namespace std;

void menu() {   
	cout << "\n----- Fool Proof Menu -------------\n"
		<< "  1 - Enter a line of text\n"
		<< "  2 - Enter a word of text\n"
		<< "  3 - Enter an integer number\n"
		<< "  4 - Enter a flaoat number\n"
		<< "  h - Help menu\n"
		<< "  q - quit\n";

}

int main() {
    int	i;
    float f;
    string input, choice;

    menu();
    
    bool stay = true;
    
    while(stay) {
        cout << "  Enter your choice: ";	
        getline(cin, choice);
        
        switch(choice[0]) {
            case '1': 
            {
                cout << "Enter a text line: ";
                getline(cin, input);
                cout << input << endl;
            }
                break;
            
            case '2': 
            {
                cout << "Enter a text word: ";
                getline(cin, input, ' ');
                cout << input << endl;
                cin.ignore(INT_MAX, '\n');
            }
                break;
            
            case '3': 
            {
                cout << "Enter an integer number: ";
                // stringstream ss;
                // getline(ss, input);
                getline(cin, input);
                stringstream ss(input);
                ss >> i;
                if (ss.fail()) // not an integer
                    cout << "Can not find the int number inside.\n";
                else 
                    cout << i << endl;
            }   
                break;
             
            case '4': 
            {
                cout << "Enter a float number: ";
                getline(cin, input);
                stringstream ss(input);
                ss >> f;
                if (ss.fail()) // not an integer
                    cout << "Can not find the float number inside.\n";
                else 
                    cout << f << endl;
            }
                break;
            
            case 'q':
                stay = false;
                break;
            case 'h': 
                menu(); break;
            default:
                cout << "\ncommand not recognized.\n";
        } // end of switch
    } // end of while
        
}