Module 1 Introduction to C++
-------------------------------------------
### Table of Contents
    Chapter 2 Introduction to C++
    2.1 The Parts of a C++ Program
    2.2 The cout Object
    2.3 The #include Directive
    2.4 Variables and Literals
    2.5 Identifiers
    2.6 Integer Data Types
    2.7 The char Data Type
    2.8 The C++ string Class
    2.9 Floating-Point Data Types
    2.10 The bool Data Type
    2.11 Determining the Size of a Data Type
    2.12 Variable Assignments and Initialization
    2.13 Scope
    2.14 Arithmetic Operators
    2.15 Comments
    2.16 Named Constants
    2.17 Programming Style 

### Textbook Source Listings
### PR 02 Introduction to C++

### Lecture Source Codes
    ex1C.cpp
    hello.cpp
    Pr2-2.cpp
    Pr2-28_alt.cpp
    test.html

### SHORTCUTS
    // c9 tab shortcuts Alt-Shift-W (Alternate Window)
    // c9 supports emmet html shortcuts
    // c9 text editor supports Regular Expression
### C v. C++ solutions
######  C   procedural 
######	C++ object oriented
### User Interface (I/O) libraraies
    C   <cstdio> or "stdio.h"
    C++ <iostream>
### ...  Go through all sections!
### 2.2 The cout Object
    int i = 3;
    cout << "hello\n";
    cout << "The integer i is " << i;
### 2.4 Variables and Literals
    The literals is the value that assigned to a variable.
    20 is an Integer literal
    "Today we sold " is a String literal 
### 2.5 Identifers
    An identifier is a programmer-defined name that represents some element of a program. Variable names are examples of identifiers. 
#### Legal Identifiers 
    • The first character must be one of the letters a through z, A through Z, or an underscore character (_).
    • After the first character you may use the letters a through z or A through Z, the digits 0 through 9, or underscores.
    • Uppercase and lowercase characters are distinct. This means ItemsOrdered is not the same as itemsordered. 
### 2.6 ~ 2.10 Data Types
    Numbers: Integer, Floating Point
    Text: Character, Text
    Logical: True/False
### 2.11 Determining the Size of a Data Type 
    Example 2-18
### 2.12 Variable Assignments and Initialization
    Variable has to be declared first, i.e. to allocate memory resource.
    When Variable is declared, its value (content) may not be blank.
    It it a good practice to combine the declaration and initial assignment in one statement. 
### 2.13 Scope
    Variable with the same name can co-exist in different scope
### 2.14 Arithmetic Operations and Math Functions
	C++ expression is similar but different from Math expression.
	Normally requires extra syntax notes, such as declaration, termination,...etc.
	Watch out for assignming an Integer Division result to a float variable!
### 2.15 Comments
    There are two kinds of comment:
    // line comment
    /* multi-line 
        comment */
### 2.16 Named Constants
    Pr2-28_alt.cpp // modified line 19
    /home/ubuntu/environment/CS110/m01/Pr2-28_alt.cpp:19:7: error: assignment of read-only variable ‘PI’
### 2.17 Programming Style
    Multi-statements per line
    Multi-lines per statement
    Braced block vs. Offside bloack
