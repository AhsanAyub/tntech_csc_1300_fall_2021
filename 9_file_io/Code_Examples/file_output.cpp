#include <iostream>
// To work with files, we use the following library
// ifstream -> allows reading input from files
// ofstream -> allows outputing to files
#include <fstream>

using namespace std;

int main()
{
    // Identifier of ofstream class to write on files
    ofstream myFile;

    // Open the file named example.txt
    // Even if the file doesn't exist in the directory
    // or the folder, the compiler will create the file and
    // then we can write on it using the myFile identifier
    myFile.open("example.txt");

    // Similar to cout statements, we can write out files
    // using << operator
    myFile << "This is a line in the text file." << endl;
    myFile << "This is a line 2 in the text file." << endl;
    myFile << "This is a line 3 in the text file." << endl;

    int myVar = 100;

    // We can also dump the variable's value inside the
    // the file using << operator (same as cout)
    myFile << myVar << endl;

    // We need to close the file after we are done with it
    myFile.close();
}