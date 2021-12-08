#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> myVector;
    for(int i = 1; i <= 5; i++)
        myVector.push_back(i * 100);

    // For each loop literals in C++
    for (int item : myVector)
        cout << item << endl;

    return 0;
}