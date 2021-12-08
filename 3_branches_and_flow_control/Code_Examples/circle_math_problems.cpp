#include <iostream>
#include <cmath>    // To perform certain math operations
using namespace std;

int main()
{
    cout << "Basic Circle-related Maths Problems." << endl;
    cout << "Please choose one of the options:" << endl;
    cout << "(1) Area of a circle" << endl;
    cout << "(2) Radius of a circle" << endl;
    cout << "(3) Diameter of a circle" << endl;

    // Declare a short int variable to store the user's choice 
    short int userChoice;
    cin >> userChoice;

    // Declaration of essential variables for the computaitons
    double radius, diameter, area;
    switch (userChoice)
    {
        // Compute the area of a circle
        case 1:
            cout << "Area = pi * radius^2" << endl;
            cout << "Please enter the radius: ";
            cin >> radius;
            area = 3.1416 * pow(radius, 2); // This is defined in cmath library
            cout << "The area of the circle is " << area << " sq unit.\n";
            break; // Exit the switch statement

        // Compute the radius of a circle
        case 2:
            cout << "Radius = sqrt(Area / pi)" << endl;
            cout << "Please enter the area: ";
            cin >> area;
            radius = sqrt(area / 3.1416);   // This is defined in cmath library
            cout << "The radius of the circle is " << radius << " unit.\n";
            break; // Exit the switch statement

        // Compute the diameter of a circle
        case 3:
            cout << "Diamater = 2 * radius" << endl;
            cout << "Please enter the radius: ";
            cin >> radius;
            diameter = 2 * radius;
            cout << "The diameter of the circle is " << diameter << " unit.\n";
            break; // Exit the switch statement
        
        //An invalid choice is given; terminate the program with error message
        default:
            cerr << "You have entered a wrong choice." << endl;
            cerr << "Terminating the program" << endl;
            break; // Exit the switch statement
    }

    return 0;
}