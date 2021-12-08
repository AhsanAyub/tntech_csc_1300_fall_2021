#include <iostream>
using namespace std;

int main()
{
    // Declare the variable
    int n;
    cin >> n;   // Take user input

    // Exterior loop to iterate through 2 to n
    for(int i = 2; i <= n; i++)
    {
        // The flag value to differentiate
        bool isPrime = true;
        // Interior loop to check the prime number
        for(int j = 2; j <= i-1; j++)
        {
            if(i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        // Display the prime number only
        if(isPrime)
            cout << i << " ";
    }
    cout << endl;
    return 0;
}