#include <iostream>
#include <vector>
using namespace std;

// Takes the address of the vector
void foo(vector<int> &iVectors)
{
    iVectors.push_back(60);
}

int main()
{
    vector<int> myVector;
    for(int i = 1; i <= 5; i++)
        myVector.push_back(i*10);

    // Pass by reference call
    foo(myVector);

    int vectorSize = myVector.size();
    for(int i = 0; i < vectorSize; i++)
        cout << myVector.at(i) << endl;

    return 0;
}