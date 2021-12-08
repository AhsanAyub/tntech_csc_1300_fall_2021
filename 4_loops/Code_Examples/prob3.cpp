#include <iostream>
using namespace std;

int main()
{
    // n is a positive integar initilized by the user
    unsigned int n, sum = 0;
    // Take the user input
    cin >> n;

    // Compute the sum of 1 to n
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << sum << endl;

    return 0;
}