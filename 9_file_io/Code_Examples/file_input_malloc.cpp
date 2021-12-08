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

    // Check if the name of the file is passed
    if(argc != 2)
    {
        cerr << "The usage of the program: ./<name_of_the_exectuable> <name_of_the_text_file>" << endl;
        return -1;
    }

    // Opening the file that was passed through the
    // command line argument
    inputFile.open(argv[1]);

    // Do the operations only when the file has been
    // successfully opened
    if(inputFile.is_open())
    {
        // This string variable will be storing each line
        // of the file
        string line;
        // Read the number of lines in the text file
        getline(inputFile, line);
        // Store the number of lines in a variable to create
        // the dynamic size of array
        unsigned int arraySize = stoi(line); // "5" -> 5

        // Create a dynamic array to store all the int values
        int* items = (int*) malloc(arraySize * sizeof(int));

        // Iterate through the text file to add items in the array
        int i = 0; // To access each array element (index)
        while(getline(inputFile, line))
        {
            items[i] = stoi(line);
            i += 1;
        }

        // Print the array to see if it worked
        for(int i = 0; i < arraySize; i++)
        {
            cout << items[i] << " ";
        }
        cout << endl;

        // We need to close the file after we are done with it
        inputFile.close();
    }
    else
    {
        cerr << "Something went wrong opening the file.\n";
        return -1;
    }

    return 0;
}