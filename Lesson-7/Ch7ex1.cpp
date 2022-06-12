#include <iostream>
using namespace std;

const double Pi = 3.14159265;

double Area(double radius)
{
	return Pi * radius * radius;

}

int main()
{
	cout << "Enter radius: ";
	double radius = 0;
	cin >> radius;

	cout << "Area: " << Area(radius) << endl;

	return 0;

}
