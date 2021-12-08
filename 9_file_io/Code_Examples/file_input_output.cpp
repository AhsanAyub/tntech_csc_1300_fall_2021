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
    ifstream inputFile;

    // Identifier of the oifstream class to write contents
    // on the files
    ofstream outputFile;

    // Check if the name of the file is passed
    if(argc != 2)
    {
        cerr << "The usage of the program: ./<name_of_the_exectuable> <name_of_the_text_file>" << endl;
        return -1;
    }

    // Opening the file that was passed through the
    // command line argument
    inputFile.open(argv[1]);

    // Openning a file to dump the strings
    outputFile.open("output.txt");

    // Do the operations only when the files have been
    // successfully opened
    if(inputFile.is_open() && outputFile.is_open())
    {
        // This string variable will be storing each line
        // of the file
        string line;
        // Read the first line to get the number of lines
        getline(inputFile, line);

        // Store the number of lines in a variable
        unsigned int NumberOfLines = stoi(line); //"5" -> 5
        
        // Iterate through the entire text file
        for(int i = 1; i <= NumberOfLines; i++)
        {
            // Read one line at a time
            getline(inputFile, line);
            // Display the string on screen
            cout << line << endl;
            // Dump the string in the text file.
            outputFile << line << endl;
        }

        // We need to close the file after we are done with it
        inputFile.close();
        outputFile.close();
    }

    else
    {
        cerr << "Something went wrong opening the files.\n";
        return -1;
    }

    return 0;
    
}