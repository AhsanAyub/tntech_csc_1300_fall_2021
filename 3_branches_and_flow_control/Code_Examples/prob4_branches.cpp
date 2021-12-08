/*
 * Problem: Find the absolute value of a number entered through
 * the keyboard.
 * 
 * Example
 * Case (1)
 * i/p: -45
 * o/p: 45
 * 
 * Case (2)
 * i/p: 100
 * o/p: 100
 * 
 */

#include <iostream>
using namespace std;

int main()
{
    // Declare all the variables
    int number;
    
    // Take the input from the user
    cin >> number;

    // Perform the computation
    if(number < 0)
        cout << number * (-1) << endl;
    else
        cout << number << endl;

    return 0;
}