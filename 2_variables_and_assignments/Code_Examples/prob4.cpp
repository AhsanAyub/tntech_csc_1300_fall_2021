/*
 * Problem: If a three-digit number is input through the keyboard, write a program to
 * calculate the sum of its digits. (Hint: Use the modulus operator %)
 * 
 * Example
 * Case (1)
 * i/p: 369
 * o/p: 18
 * 
 * Case (2)
 * i/p: 999
 * o/p: 27
 */

#include <iostream>
using namespace std;

int main()
{
    // Declare all the variables
    int threeDigitNumber;
    int singleDigit, sum = 0;

    // Take the inputs from the user
    cin >> threeDigitNumber;

    // Extract the last most digit
    singleDigit = threeDigitNumber % 10;
    sum += singleDigit; // Add it to the sum

    // Remove the last most digit
    // Three digit number -> two digit number
    threeDigitNumber /= 10; 
    // This is extracting the 2nd digit from the two digit number
    singleDigit = threeDigitNumber % 10; 
    sum += singleDigit; // Add it to the sum

    // Remove the last most digit
    // Two digit number -> one digit number
    threeDigitNumber /= 10;
    sum += threeDigitNumber; // Add it to the sum

    // Print the values of the variables on display
    cout << sum << endl;

    return 0;

}