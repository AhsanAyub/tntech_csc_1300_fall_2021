/*
 * Problem: If a three-digit number is input through the keyboard, write a program
 * to print a new number by adding one to each of its digits.
 * For example if the number that is input is 123 then the output should
 * be displayed as 234. (Hint: Use the modulus operator %)
 * 
 * Example
 * Case (1)
 * i/p: 123
 * o/p: 246
 * 
 * Case (2)
 * i/p: 246
 * o/p: 357
 */

#include <iostream>
using namespace std;

int main()
{
    // Declare all the variables
    int threeDigitNumber;
    int singleDigit, addedOneNumber = 0;

    // Take the inputs from the user
    cin >> threeDigitNumber;

    // Extract the last most digit
    singleDigit = threeDigitNumber % 10;
    // The last digit is stored with one addition
    addedOneNumber += singleDigit + 1; 

    // Remove the last most digit
    // Three digit number -> two digit number
    threeDigitNumber /= 10; 
    // This is extracting the 2nd digit from the two digit number
    singleDigit = threeDigitNumber % 10;
    // The second digit (multiplying by 10)  is stored with one addition
    addedOneNumber += (10 * (singleDigit + 1)); 

    // Remove the last most digit
    // Two digit number -> one digit number
    threeDigitNumber /= 10;
    // The first digit (multiplying by 100) is stored with one addition
    addedOneNumber += (100 * (threeDigitNumber + 1));

    // Print the values of the variables on display
    cout << addedOneNumber << endl;

    return 0;

}