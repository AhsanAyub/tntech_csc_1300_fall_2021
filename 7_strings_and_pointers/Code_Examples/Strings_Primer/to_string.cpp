#include <iostream>
#include <string>   // Required for the string

using namespace std;

int main()
{
    long long phoneNumber;
    
    cin >> phoneNumber; // 9310001234
    cout << phoneNumber << endl; 

    string phoneNumberWithInternationalDialCode = "";
    phoneNumberWithInternationalDialCode += "+1";
    phoneNumberWithInternationalDialCode += to_string(phoneNumber); // "9310001234"

    cout << phoneNumberWithInternationalDialCode << endl;

    return 0;
}