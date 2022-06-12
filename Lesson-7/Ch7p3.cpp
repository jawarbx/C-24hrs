#include <iostream>
using namespace std;

const double Pi = 3.14159265;

void AreaAndCircumference(double radius, double& Area, double& Circumference)
{
	Area = Pi * radius * radius; 
	Circumference = 2 * Pi * radius;

}

int main()
{
	cout << "Enter radius: ";
	double radius = 0;
	cin >> radius;

	double Area = 0;
	double Circumference = 0;

	AreaAndCircumference(radius, Area, Circumference);

	cout << "Area is: " << Area << endl;
	cout << "Circumference is: " << Circumference << endl;


	return 0;
}
