#include <iostream>
using namespace std;

int main()
{
    // Variable to store the user input
    unsigned int number;
    // Variable to store the sum
    short sum = 0;
    // Take the user input
    cin >> number;
    
    // The loop to iterate through each digit of the input
    while(number != 0 /* Continue till there's a digit left*/)
    {
        // Take out the last digit of the input and add it to the sum
        sum = sum + (number % 10);
        // Remove the last digit of the input
        number = number / 10;
    }
    // Display the sum
    cout << sum << endl;
}