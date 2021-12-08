#include <iostream>
#include <string>   // Required for the string

using namespace std;

int main()
{
    //9310001234
    long long phoneNumber;
    
    cin >> phoneNumber;
    //cout << phoneNumber << endl;

    string phoneNumberString = to_string(phoneNumber); // "9310001234"

    //cout << phoneNumberString.substr(3, 6) << endl;

    //+1(931) 000-1234
    string phoneNumberWithInternationalDialCode = "";
    phoneNumberWithInternationalDialCode += "+1"; // "+1"
    phoneNumberWithInternationalDialCode += "("; // "+1("

    phoneNumberWithInternationalDialCode += phoneNumberString.substr(0,3); // "+1(931"
    phoneNumberWithInternationalDialCode += ") ";// "+1(931) "
    phoneNumberWithInternationalDialCode += phoneNumberString.substr(3,3); // "+1(931) 000"
    phoneNumberWithInternationalDialCode += "-"; // "+1(931) 000-"
    phoneNumberWithInternationalDialCode += phoneNumberString.substr(6,4); // "+1(931) 000-1234"

    cout << phoneNumberWithInternationalDialCode << endl;

    return 0;
}