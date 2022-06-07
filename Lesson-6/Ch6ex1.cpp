#include <iostream>
using namespace std;

int main()
{
	cout << "Enter two integers: " << endl;
	int num1 = 0, num2 = 0;
	cin >> num1;
	cin >> num2;

	cout << "To multiply, press 'm' and enter. Otherwise enter nothing to add: " << endl;
	char userSelection = '\0';
	cin >> userSelection;

	if (userSelection == 'm')
		cout << (num1 * num2) << endl;
	else
		cout << (num1 + num2) << endl;

	return 0;

}
