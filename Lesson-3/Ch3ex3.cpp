#include <iostream>
using namespace std;

int firstNumber = 0;
int secondNumber = 0;
int multiplicationResult = 0;

void MultiplyNumbers()
{
	cout << "Enter the first number: ";
	cin >> firstNumber;

	cout << "Enter the second number: ";
	cin >> secondNumber;

	multiplicationResult = firstNumber * secondNumber;
	
	cout << "Displaying from MultiplyNumbers" << endl;
	cout << firstNumber << " x " << secondNumber << " = " << multiplicationResult << endl;
	
}

int main()
{
	cout << "This program multiplies two numbers using a previously declared function" << endl;

	MultiplyNumbers();

	cout << "Displaying from main" << endl;
	cout << firstNumber << " x " << secondNumber << " = " << multiplicationResult << endl;

	return 0;
}
