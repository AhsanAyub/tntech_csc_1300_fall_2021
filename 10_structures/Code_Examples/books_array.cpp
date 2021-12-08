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
    Book b[3];

    for(int i = 0; i < 3; i++)
    {
        getline(cin, b[i].name);
        cin >> b[i].price;
        cin >> b[i].pages;
        cin.ignore();
    }

    for(int i = 0; i < 3; i++)
        cout << b[i].name << "\t" << b[i].price << "\t" << b[i].pages << endl;
    
    return 0;
}