/*
 * Problem: The distance between two cities (in miles) is input through the keyboard.
 * Write a program to convert and print this distance in kilometers (km), and meters (m).
 * (1 mile = 1.6 km; 1 km = 1,000 m)
 * 
 * Example
 * Case (1)
 * i/p: 1032
 * o/p: 1651.2 (for km) and 1651200 (for m)
 * 
 * Case (2)
 * i/p: 146.54
 * o/p: 234.464 (for km) and 234464 (for m)
 */

#include <iostream>
using namespace std;

int main()
{
    // Declaring all the variables
    double mile, kilometer, meter;

    // Take input from the user
    cin >> mile;

    // Covert miles into kilometers
    kilometer = mile * 1.6;
    // Convert kilometers to meters
    meter = kilometer * 1000;

    // Printing out the results on screen
    cout << kilometer << endl;
    cout << meter << endl;

    return 0;
}