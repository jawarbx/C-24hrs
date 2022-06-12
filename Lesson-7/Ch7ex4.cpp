#include <iostream>
using namespace std;

double Area(double radius, double pi = 3.14);

int main()
{
	cout << "Enter radius: ";
	double radius = 0;
	cin >> radius;

	cout << "The current value of pi is 3.14. Would you like to change this? (y/n): ";
	char changePi = 'n';
	cin >> changePi;

	if(changePi == 'y')
	{
		cout << "Enter new value of pi: " << endl;
		double newPi = 3.14;
		cin >> newPi;
		cout << "The area is: " << Area(radius, newPi) << endl;
	}
	else
		cout << "The area is: " << Area(radius) << endl;

	return 0;
}

double Area(double radius, double pi)
{
	return pi * radius * radius;

}
