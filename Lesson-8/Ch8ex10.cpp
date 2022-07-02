#include <iostream>
using namespace std;

void CalcArea(const double* const ptrPi, const double* const ptrRadius, double* const ptrArea)
{
	if(ptrPi && ptrRadius && ptrArea)
	{
		*ptrArea = (*ptrPi) * (*ptrRadius) * (*ptrRadius);

	}

}

int main()
{
	const double Pi = 3.14159265;

	cout << "Enter Radius of Circle: ";
	double radius = 0;
	cin >> radius;

	double area = 0;

	CalcArea(&Pi, &radius, &area);

	cout << "Area = " << area << endl;

	return 0;



}


