#include <iostream>
using namespace std;

const double Pi = 3.14159265;

double SurfaceArea(double radius, double height);

int main()
{
	cout << "Enter radius: ";
	double radius = 0;
	cin >> radius;

	cout << "Enter height: ";
	double height = 0;
	cin >> height;

	cout << "The volume is: " << SurfaceArea(radius, height) << endl;

	return 0;
}

double SurfaceArea(double radius, double height)
{
	return (2 * Pi * radius * radius) +  (2 * Pi * radius * height);
}
