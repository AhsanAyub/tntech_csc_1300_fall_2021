#include <iostream>
using namespace std;

int main()
{
    // Initializing the variablers to store the results
    unsigned short positiveCount = 0, negativeCount = 0;
    int userInput;

    while(true)
    {
        // Base or loop terminating condition
        if(userInput == 0)
            break;
        
        // Negative counts
        else if(userInput < 0)
            negativeCount += 1;

        // Positive counts
        else
            positiveCount += 1;
    }
    // Display the count of positive and negative numbers
    cout << positiveCount << " " << negativeCount << endl;
}