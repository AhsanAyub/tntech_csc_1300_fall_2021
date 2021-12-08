/*
 * Problem: If the cost price and the selling price of an item is
 * input through the keyboard, write a program to determine whether
 * the seller has made profit or incurred loss. Also determine how much
 * profit was made or loss was incurred.
 * 
 * Example
 * Case (1)
 * i/p:
 * 106.47
 * 199.99
 * o/p:
 * profit
 * 93.52
 * 
 * Case (2)
 * i/p:
 * 106.47
 * 87.24
 * o/p:
 * loss
 * 19.23
 */

#include <iostream>
using namespace std;

int main()
{
    // Declare all the variables
    double costPrice, sellingPrice;
    
    // Take the inputs from the user
    cin >> costPrice;
    cin >> sellingPrice;

    // Perform the computation
    if(sellingPrice >= costPrice)
    {
        cout << "profit" << endl;
        cout << sellingPrice - costPrice << endl;
    }
    else
    {
        cout << "loss" << endl;
        cout << costPrice - sellingPrice << endl;
    }

    return 0;

}