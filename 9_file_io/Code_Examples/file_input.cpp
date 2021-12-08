#include <iostream>
// To work with files, we use the following library
// ifstream -> allows reading input from files
// ofstream -> allows outputing to files
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
    // Identifier of the ifstream class to read contents
    // from the files
    ifstream myFile;

    // Check if the name of the file is passed
    if(argc != 2)
    {
        cerr << "The usage of the program: ./<name_of_the_exectuable> <name_of_the_text_file>" << endl;
        return -1;
    }

    // Opening the file that was passed through the
    // command line argument
    myFile.open(argv[1]);


    // Do the operations only when the file has been
    // successfully opened
    if(myFile.is_open())
    {
        // This string variable will be storing each line
        // of the file
        string line;
        // Read one line
        getline(myFile, line);
        // Print the line that was read on file
        cout << line << endl;

        // Read the second line
        getline(myFile, line);
        // Read the second line
        cout << line << endl;

        // Read the third line
        getline(myFile, line);
        // Read the third line
        cout << line << endl;
    }

    else
    {
        cerr  << "File was not found." << endl;
        return -1;
    }


    // We need to close the file after we are done with it
    myFile.close();

    return 0;
}