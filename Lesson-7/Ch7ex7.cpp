#include <iostream>
using namespace std;

const double Pi = 3.14159265;

double Area(double radius);
double Area(double radius, double height);

int main()
{
	cout << "Enter z for Cylinder, c for circle: ";
	char CylinderOrCircle = 'z';
	cin >> CylinderOrCircle;

	cout << "Enter radius: ";
	double radius = 0;
	cin >> radius;

	if (CylinderOrCircle == 'z')
		{
			cout << "Enter height: ";
			double height = 0;
			cin >> height;

			cout << "Surface Area of Cylinder: " << Area(radius, height) << endl;

		}
	else
		cout << "Area of Circle: " << Area(radius) << endl;

	return 0;
}

double Area(double radius)
{
	return Pi * radius * radius;

}

double Area(double radius, double height)
{
	return 2 * Area(radius) + (2 * Pi * radius * radius); 

}

