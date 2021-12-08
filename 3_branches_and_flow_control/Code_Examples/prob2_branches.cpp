/*
 * Problem: Any year is input through the keyboard.
 * Write a program to determine whether the year is a leap year or not.
 * 
 * Example
 * Case (1)
 * i/p: 2004
 * o/p: yes
 * 
 * Case (2)
 * i/p: 2000
 * o/p: yes
 * 
 * Case (3)
 * i/p: 2050
 * o/p: no
 */

#include <iostream>
using namespace std;

int main()
{
    // Declare all the variables
    short int inputYear;
    
    // Take the input from the user
    cin >> inputYear;

    // Check if the year is multiple of 400
    if(inputYear % 400 == 0)
        cout << "yes" << endl;
    // Check if the year is multiple of 4 AND not multiple of 100
    else if(inputYear % 4 == 0 && inputYear % 100 != 0)
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    return 0;

}