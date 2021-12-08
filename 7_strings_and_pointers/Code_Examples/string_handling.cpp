#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[] = "CSC 1300-001";
    char s2[100];
    char s3[] = " Intro to Programming";

    // String handling functions
    strcpy(s2, s1);
    strcat(s1, s3);

    cout << s1 << endl;
    cout << s2 << endl;

    return 0;
}