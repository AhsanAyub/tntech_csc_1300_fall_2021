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

    getline(cin, b.name);
    cin >> b.price;
    cin >> b.pages;

    cout << b.name << "\t" << b.price << "\t" << b.pages << endl;
    
    return 0;
}