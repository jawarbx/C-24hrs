#include <iostream>
using namespace std;

int main()
{
	const int numsToCalculate = 5;
	cout << "This program print " << numsToCalculate << " fibonacci numbers at a time." << endl;

	int num1 = 0, num2 = 1;
	char wantMore = '\0';
	cout << num1 << " " << num2 << " " << endl;

	do
	{
		for(int i=0; i<numsToCalculate; i++)
		{
			cout << num1 + num2 << " ";
			int num2Temp = num2;
			num2 += num1;
			num1 = num2Temp;
		}
		cout << endl << "Do you want more numbers? (y/n): ";
		cin >> wantMore;

	} while(wantMore == 'y');

	cout << "Done!" << endl;
	return 0;




}
