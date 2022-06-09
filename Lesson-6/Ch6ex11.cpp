#include <iostream>
using namespace std;

int main()
{
	for(;;)
	{
		cout << "Enter two integers: " << endl;
		int num1 = 0, num2 = 0;
		cin >> num1;
		cin >> num2;

		cout << "Do you wish to change the integers? (y/n)" << endl;
		char changeNum  = '\0';
		cin >> changeNum;

		if (changeNum == 'y')
			continue;

		cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
		cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
		cout << num1 << " x " << num2 << " = " << num1 * num2 << endl;
		cout << num1 << " ÷ " << num2 << " = " << num1 / num2 << endl;

		cout << "If you wish to exit, press (x) and enter. Otherwise, press something else to continue." << endl;
		char breakLoop = '\0';
		cin >> breakLoop;

		if (breakLoop == 'x')
			break;

	}

	return 0;

}
