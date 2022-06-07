#include <iostream>
using namespace std;

int main()
{
	cout << "Number?: ";
	int number = 0;
	cin >> number;

	int result1 = ((number << 1) + 5) << 1;
	int result2 = number << 1 + 5 << 1;

	cout << result1 << endl;
	cout << result2 << endl;

	return 0;



}
