#include <iostream>
#include <compare>
using namespace std;

int main()
{
	int num1, num2;
	cout << "Enter two integers: " << endl;
	cout << "num1: ";
	cin >> num1;
	cout << "num2: ";
	cin >> num2;

	auto resultComparison = (num1 <=> num2);

	if (resultComparison < 0)
		cout << "num1 is less than num2" << endl;
	else if (resultComparison > 0)
		cout << "num1 is greater than num2" << endl;
	else
		cout << "num1 is equal to num2" << endl;


	return 0;

}
