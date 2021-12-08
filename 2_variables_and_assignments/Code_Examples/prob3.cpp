/*
 * Problem: Two numbers are input through the keyboard into two int variables 
 * x and y. Write a program to interchange the contents of x and y.
 * 
 * Example
 * Case (1)
 * i/p: 10 12
 * o/p: 12 10
 * 
 * Case (2)
 * i/p: 5 100
 * o/p: 100 5
 */

#include <iostream>
using namespace std;

int main()
{
    // Declare the variables
    int x, y;
    int temp; // A temporary variable to store the value temporarily

    // Take the inputs from the user
    cin >> x;
    cin >> y;

    // Interchange the contents of twe variables with the help of temp variable
    temp = x;
    x = y;
    y = temp;

    // Print the values of the variables on display
    cout << x << endl;
    cout << y << endl;

    return 0;

}