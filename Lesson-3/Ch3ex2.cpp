#include <iostream>
using namespace std;

void MultiplyNumbers()
{
	cout << "Enter the first number: ";
	int firstNumber = 0;
	cin >> firstNumber;

	cout << "Enter the second number: ";
	int secondNumber = 0;
	cin >> secondNumber;

	int multiplicationResult = firstNumber * secondNumber;

	cout << firstNumber << " x " << secondNumber << " = " << multiplicationResult << endl;

	// Note: Does not need return because was initially declared void function
	
}

int main()
{
	cout << "This program multiplies two numbers using a previously declared function" << endl;

	MultiplyNumbers();

	return 0;
}
