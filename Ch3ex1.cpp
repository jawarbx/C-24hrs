#include <iostream>
using namespace std;

int main() 
{
	cout << "This program multiplies two numbers" << endl;

	cout << "Enter the first number: ";
	int firstNumber = 0;
	cin >> firstNumber;

	cout << "Enter the second number: ";
	int secondNumber;
	cin >> secondNumber;

	// Multiply first and second numbers and store in result variable
	int multiplicationResult = firstNumber * secondNumber;

	// Display result
	cout << firstNumber << " x " << secondNumber << " = " << multiplicationResult << endl;

	return 0;

}
