#include <iostream>
using namespace std;

int main()
{
	int age = 30;
	int dogsAge = 9;

	cout << "Integer age = " << age << endl;

	int* pointsToInt = &age;
	cout << "pointsToInt now points to age" << endl;

	cout << "pointsToInt = " << pointsToInt << endl;

	cout << "*pointsToInt = " << *pointsToInt << endl;

	cout << "Integer dogsAge = " << dogsAge << endl;

	pointsToInt = &dogsAge;
	cout << "pointsToInt now points to dogsAge" << endl;

	cout << "pointsToInt = " << pointsToInt << endl;

	cout << "*pointsToInt = " << *pointsToInt << endl;


	return 0;

}
