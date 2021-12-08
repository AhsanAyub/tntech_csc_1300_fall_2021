#include <iostream>
using namespace std;

struct Book
{
    string name;
    double price;
    int pages;
};

int main()
{
    Book b;

    b.name = "Intro to C++";
    b.price = 89.46;
    b.pages = 172;

    cout << b.name << "\t" << b.price << "\t" << b.pages << endl;
    
    return 0;
}