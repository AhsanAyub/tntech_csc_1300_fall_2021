/*
 * Problem: Write a program to check whether a triangle is valid or
 * not, when the three angles of the triangle are entered through
 * the keyboard. Please note that a triangle is valid if the sum of
 * all the three angles is equal to 180 degrees.
 * 
 * Example
 * Case (1)
 * i/p: 90 45 45
 * o/p: valid
 * 
 * Case (2)
 * i/p: 60 30 90
 * o/p: valid
 * 
 * Case (3)
 * i/p: 60 45 45
 * o/p: invalid
 */

#include <iostream>
using namespace std;

int main()
{
    // Declare all the variables
    short int angel1, angel2, angel3;
    
    // Take the inputs from the user
    cin >> angel1;
    cin >> angel2;
    cin >> angel3;

    // Perform the computation
    if((angel1 + angel2 + angel3) == 180)
        cout << "valid" << endl;
    else
        cout << "invalid" << endl;

    return 0;
}