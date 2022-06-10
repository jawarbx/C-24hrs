#include <iostream>
using namespace std;

int main()
{
	cout << "How many fibonacci numbers would you like to print at a time?: " << endl;
	int toCalculate = 0;
	cin >> toCalculate;

	int num1 = -1, num2 = 1;

	char printMore = '\0';
	do
	{
		for (int i = 0; i<toCalculate; i++)
		{
			cout << num1 + num2 << " ";
			int temp = num2;
			num2 += num1;
			num1 = temp;
		}	
		cout << "Would you like to print more numbers? (y/n):" << endl;
		cin >> printMore;

	} while (printMore == 'y');

	cout << "All done!" << endl;

	return 0;
}
