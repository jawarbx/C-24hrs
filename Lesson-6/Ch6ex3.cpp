#include <iostream>
using namespace std;

int main()
{
	cout << "Enter two numbers: " << endl;
	float num1 = 0, num2 = 0;
	cin >> num1;
	cin >> num2;

	cout << "Enter 'd' to divide, anything else to multiply: " << endl;
	char userSelection = '\0';
	cin >> userSelection;

	if(userSelection == 'd')
	{
		cout << "You chose to divide!" << endl;
		if(num2 != 0)
			cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
		else
			cout << "Cannot divide by 0." << endl;
	}
	else
	{
		cout << "You chose to multiply!" << endl;
		cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
	}

	return 0;


}
