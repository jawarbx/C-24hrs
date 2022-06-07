#include <iostream>
using namespace std;

int main()
{
	cout << "First Boolean Value (0 for false, 1 for true): ";
	bool value1 = 0;
	cin >> value1;
	cout << "Second Boolean Value (0 for false, 1 for true): ";
	bool value2 = 0;
	cin >> value2;

	cout << value1 << " & " << value2 << " = " << (value1 & value2) << endl;
	cout << value1 << " | " << value2 << " = " << (value1 | value2) << endl;
	cout << value1 << " ^ " << value2 << " = " << (value1 ^ value2) << endl;

	return 0;



}
