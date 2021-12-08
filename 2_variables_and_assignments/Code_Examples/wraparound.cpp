/* 
 * The purpose of this program is to demonstrate that the integer data type's
 * variable value will do wraparound if it exceeds the max value or goes
 * below the min value.
 * 
 * Last Edited on Aug 30, 2021 at 11:00 AM (CDT)
 */

#include <iostream>
using namespace std;

int main()
{
    // Declaration of a unsigned short int variable.
    // Size is 0 - 2^16 - 1
    unsigned short int u_x;
    u_x = 65535; // 2^16 - 65535 (max size)
    cout << u_x << endl;

    u_x = u_x + 7; // Exceeds the maximum threshold
    cout << u_x << endl;

    u_x = 0;    // min value
    u_x = u_x - 5;  // Goes below the minimum threshold
    cout << u_x << endl;
}