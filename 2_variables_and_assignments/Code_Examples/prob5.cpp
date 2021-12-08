/*
 * Problem: If a three-digit number is input through the keyboard, write
 * a program to reverse the number. (Hint: Use the modulus operator %)
 * 
 * Example
 * Case (1)
 * i/p: 369
 * o/p: 963
 * 
 * Case (2)
 * i/p: 999
 * o/p: 999
 */

#include <iostream>
using namespace std;

int main()
{
    // Declare all the variables
    int threeDigitNumber;
    int singleDigit, reversedNumber = 0;

    // Take the inputs from the user
    cin >> threeDigitNumber;

    // Extract the last most digit
    singleDigit = threeDigitNumber % 10;
    // last digit is the first digit now
    reversedNumber += singleDigit * 100; 

    // Remove the last most digit
    // Three digit number -> two digit number
    threeDigitNumber /= 10; 
    // This is extracting the 2nd digit from the two digit number
    singleDigit = threeDigitNumber % 10;
    // This makes sure that the second digit is still the second digit
    reversedNumber += singleDigit * 10; 

    // Remove the last most digit
    // Two digit number -> one digit number
    threeDigitNumber /= 10;
    // The first digit is the last digit now in the reverse number variable
    reversedNumber += threeDigitNumber;

    // Print the values of the variables on display
    cout << reversedNumber << endl;

    return 0;

}