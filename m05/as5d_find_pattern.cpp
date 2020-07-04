#include <iostream>       // std::cout
#include <string>         // std::string
using namespace std;

int main () {
    string line1 = "There are two needles in this haystack with needles.";
    string line2 = "There are puddle on the driveway after rainning.";
    string pattern = "needle";
    
    // using string find() function to match pattern
    // http://www.cplusplus.com/reference/string/string/find/
    bool match = line1.find(pattern) < line1.length();
    if(match)
        cout << "'needle' found.\n";
    else
        cout << "no 'needle'.\n";
        
    match = line2.find(pattern) < line2.length();
    
    // Ch 4.13 condensed comparison with ternary operator 
    cout << (match ? "'needle' found.\n" : "no 'needle'.\n");
}