/*
 * Problem: Temperature of a city in Fahrenheit degrees is input through
 * the keyboard. Write a program to convert this temperature into Centigrade
 * degrees. Formula: (32°F − 32) × 5/9 = 0°C
 * 
 * Example
 * Case (1)
 * i/p: 74
 * o/p: 23.33
 * 
 * Case (2)
 * i/p: 104
 * o/p: 40
 */

#include <iostream>
using namespace std;

int main()
{
    
    // Declaring all the variables
    double fahrenheit, centigrade;

    // Take input from the user
    cin >> fahrenheit;

    // Covert fahrenheit into centigrade
    centigrade = fahrenheit - 32;
    centigrade *= 5;
    centigrade /= 9;
    
    // Printing out the result on screen
    cout << centigrade << endl;

    return 0;
}