#include <iostream>
using namespace std;

int main()
{
	char userSelection = 'm';

	while (userSelection != 'x')
	{
		cout << "Enter two integers: " << endl;
		int num1 = 0, num2 = 0;
		cin >> num1;
		cin >> num2;

		cout << num1 << " x " << num2 << " = " << num1 * num2 << endl; 
		cout << num1 << " + " << num2 << " = " << num1 + num2 << endl; 

		cout << "Enter x to stop. Otherwise, enter something else to run again: " << endl;
		cin >> userSelection;


	}

	cout << "All done!" << endl;
	return 0;


}
