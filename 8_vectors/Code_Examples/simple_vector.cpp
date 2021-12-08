#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Initialize a vector with some values
    vector<int> myVector = {3, 1, 8};
    
    // Add and delete some elements
    myVector.push_back(5);
    myVector.push_back(2);
    myVector.pop_back();
    myVector.push_back(10);
    myVector.pop_back();
    myVector.pop_back();
    myVector.pop_back();
    
    // Get the number of elements present
    cout << myVector.size() << endl;
    return 0;
}