#include <iostream>
#include <vector>
using namespace std;

vector<int> foo(vector<int> iVectors)
{
    iVectors.push_back(60);
    return iVectors;
}

int main()
{
    vector<int> myVector;
    for(int i = 1; i <= 5; i++)
        myVector.push_back(i*10);

    myVector = foo(myVector);

    int vectorSize = myVector.size();
    for(int i = 0; i < vectorSize; i++)
        cout << myVector.at(i) << endl;

    return 0;
}