#include<iostream>
using namespace std;

int main() {
    string input, buf[500];
    int line_index=0;
    cout << "Continue to enter something. Enter nothing to exit.\n";

    do {// get every line until empty (or EOF in your work)
        getline(cin, input); // input a line
        buf[line_index] = input;
        line_index++;
    } while(!input.empty());  // to replace with EOF conidtion
    
    // this will print out the last 3 lines
    cout << "The first empty line's index is " << line_index << endl;
    for(int i=line_index-4; i<line_index-1; i++) 
        cout << i << ": " << buf[i] << endl;
        
    cout << "the above output is not correct, fix it!\n";
}