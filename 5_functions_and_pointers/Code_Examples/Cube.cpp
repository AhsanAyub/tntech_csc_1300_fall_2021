#include <iostream>
using namespace std;

int Square(int x)
{
	return x * x;
}

int Cube(int x)
{
	return x * Square(x);
}

int main()
{
	cout << Cube(2) << endl; 
 	return 0;
}