#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // A vector of unsigned ints (0 and positives)
    vector<unsigned int> myVector;
    // An infinite loop to take user input
    // until the user inserts a negative value
    while(true)
    {
        int temp;
        cin >> temp;
        if(temp >= 0)
            myVector.push_back(temp);
        else
            break;
    }
    // Get the size of the vector
    int vectorSize = myVector.size();
    for(int i = 0; i < vectorSize; i++)
        cout << myVector[i] << endl;

    return 0;
}