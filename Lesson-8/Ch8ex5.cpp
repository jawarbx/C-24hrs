#include <iostream>
using namespace std;

int main()
{
	int dogsAge = 30;
	cout << "Initialized dogsAge = " << dogsAge << endl;

	int* pointsToAnAge = &dogsAge;
	cout << "pointsToAnAge points to dogsAge" << endl;

	cout << "Enter an age for your dog: ";
	cin >> *pointsToAnAge;

	cout << "Input stored at: " << pointsToAnAge << endl;

	cout << "New dogsAge = " << dogsAge << endl;
	return 0;

}
