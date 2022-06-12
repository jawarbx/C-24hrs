#include <iostream>
using namespace std;

const double Pi = 3.14159265;

double Volume(double radius);
double Volume(double radius, double height);

int main()
{
	cout << "Enter s for Sphere or c for Cylinder: ";
	char sphereOrCylinder = 's';
	cin >> sphereOrCylinder;

	cout << "Enter radius: ";
	double radius = 0;
	cin >> radius;

	if(sphereOrCylinder == 'c')
	{
		cout << "Enter height: ";
		double height = 0;
		cin >> height;

		cout << "Volume: " << Volume(radius, height) << endl;

	}
	else
		cout << "Volume: " << Volume(radius) << endl;

	return 0;

}

double Volume(double radius)
{
	return (4 * Pi * radius * radius * radius) / 3;

}

double Volume(double radius, double height)
{
	return Pi * radius * radius * height;

}
