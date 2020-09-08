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
    
    while(true) {
        cout << "  Enter your choice: ";	
        getline(cin, choice);
        if(choice[0] == '1') {
            cout << "Enter a text line: ";
            getline(cin, input);
            cout << input << endl;
        }
        
        else if(choice[0] == '2') {
            cout << "Enter a text word: ";
            getline(cin, input, ' ');
            cout << input << endl;
            cin.ignore(INT_MAX, '\n');
            
        }
        
        else if(choice[0] == '3') {
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
         
        else if(choice[0] == '4') {
            cout << "Enter a float number: ";
            getline(cin, input);
            stringstream ss(input);
            ss >> f;
            if (ss.fail()) // not an integer
                cout << "Can not find the float number inside.\n";
            else 
                cout << f << endl;
        }
        
        else if(choice[0] == 'q') break;
        else if(choice[0] == 'h') menu();
    } // end of while
        
}