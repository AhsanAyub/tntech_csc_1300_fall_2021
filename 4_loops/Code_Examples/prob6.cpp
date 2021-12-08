#include <iostream>
using namespace std;

int main()
{
    // Exterior loop to iterate through 1 to 500
    for(int i = 1; i <= 500; i++)
    {
        int number = i, sum = 0;
        // Interior loop to check the property of armstrong number
        // Sum of cubes of each digit of the number is equal to the number itself
        while(number != 0)
        {
            short digit = number % 10;
            sum = sum + (digit * digit * digit);
            number = number / 10;
        }
        if(i == sum)
            cout << i << endl;
    }
    return 0;
}