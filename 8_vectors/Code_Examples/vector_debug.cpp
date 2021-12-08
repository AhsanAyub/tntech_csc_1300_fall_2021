#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> myVector;
    myVector.push_back(1);
    myVector.push_back(2);
    myVector.push_back(3);
    myVector.push_back(4);
    myVector.pop_back();
    myVector.push_back(5);

    // Removes all the elements of the vector
    myVector.clear();

    return 0;
}