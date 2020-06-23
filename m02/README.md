Module 2 Expressions and Interactivities
-------------------------------------------
### Table of Contents
    Chapter 2 Expressions and Interactivities
    3.1 The cin Object
    3.2 Mathematical Expressions
    3.3 When You Mix Apples and Oranges: Type Conversion
    3.4 Overflow and Underflow
    3.5 Type Casting
    3.6 Multiple Assignment and Combined Assignment
    3.7 Formatting Output
    3.8 Working with Characters and string Objects
    3.9 More Mathematical Library Functions
    3.10 Application: Hand Tracing a Program
    3.11 Application: A Case Study 

### The online listing on programming
    The line numbers are normally included.
    To use those source code, requires to filter out those numbers.
    The method to do it is to use the regex (regular expression)
### Textbook Source Listings
### PR 03 Expressions and Interactivities
### Random Number Generator
###### Tutorial https://youtu.be/5V3njyRKnkc
### Take home exercises:
###### You are to review section examples on textbook!

### Lecture Source Codes
    math.cpp // math expression
    mpg.cpp // example
    orderly.cpp // line up relationship expression in ascending order
    random.cpp // 3 examples for random number generation
    tutorial_2d.cpp


#### The C/C++ built features inside the library (header)
###### Requred headers: iostream, iomanip, cstdio == stdio.h

#### 3.7 Formatting Output
##### Summary Table 3-12 p.117
###### iostream: fixed, showpoint, noshowpoint, left, right, 
###### iomanip: setw, setprecision

    #include <cstdio> // for getchar
    #include "stdio.h" // C notation

### Regular Expression - Regex
##### To process the text pattern inside your program i.e. search/replace/filter
###### Regex Cheat Sheet [http://tiny.cc/rf977y]
###### Example: to filter out line numbers on source code listing:
```
^ [0-9]*    
^ *[0-9]*
^ *[ 0-9]*
^ *[ 0-9]*$
```
### Cloud9 IDE shortcuts
##### To close all active tabs 
    Alt-Shift-W (Alt Windows!)