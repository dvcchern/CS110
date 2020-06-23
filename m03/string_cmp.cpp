#include<iostream>
#include<cstdio>
#include <cstring>
using namespace std;

int main() {
    
    // // comparing character literals
    // cout << "\n'A' < 'D' is ";
    // if( 'A' < 'D' ) cout << "True";
    // else cout << "False";

    // cout << "\n'D' < 'A' is ";
    // if( 'D' < 'A' ) cout << "True";
    // else cout << "False";
    
    // Comparing string literals
    // cout << "\n\"A\" < \"D\" is ";
    // if( "A" < "D" ) cout << "True";
    // else cout << "False"; 
    
    // cout << "\n\"D\" < \"A\" is ";
    // if( "D" < "A" ) cout << "True";
    // else cout << "False";
    
    // // More on comparing string literals
    // cout << "\n\"ABCD\" < \"DCBA\" is ";
    // if( "ABCD" < "DCBA" ) cout << "True";
    // else cout << "False";
    
    // cout << "\n\"DCBA\" < \"ABCD\" is ";
    // if( "DCBA" < "ABCD" ) cout << "True";
    // else cout << "False";
    
    // comparing string variables
    string s1("ABCD"), s2("DCBA"); 
    
    // cout << "\n s1 < s2 is ";
    // if (s1 < s2) cout << "True";
    // else cout << "False";
    
    cout << "\n s2 < s1 is ";
    if (s2 < s1) cout << "True";
    else cout << "False";
    
    cout << "\n s2 < s1 is ";
    cout << ( (s2 < s1) ? "True" : "False");
    
    
    // improving the conscisness
    cout << "\n s2 < s1 is "
         << ( (s2 < s1) ? "True" : "False");
    
    // // Compare C-Strings
    // char cs1[] = "ABCD", cs2[] = "DCBA";
    
    // cout << "\nstrcmp(cs1, cs2) is " << strcmp(cs1, cs2);
    // cout << "\nstrcmp(cs2, cs1) is " << strcmp(cs2, cs1);
}