#include <iostream>
using namespace std;

int main()
{
	int age = 30;

	int* pointsToInt = &age;

	cout << "pointsToInt points to age now: " << pointsToInt << endl;


	int dogsAge = 9;

	pointsToInt = &dogsAge;

	cout << "pointsToInt points to dogsAge now: " << pointsToInt << endl;

	return 0;

}
