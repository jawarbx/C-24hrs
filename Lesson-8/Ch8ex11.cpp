#include <iostream>
using namespace std;

int main()
{
	int myNumbers[5];
	int* pointToNums = myNumbers;

	cout << "pointToNums = 0x" << hex << pointToNums << endl;

	cout << "&myNumbers[0] = 0x" << hex << &myNumbers[0] << endl;

	bool tester = (pointToNums == &myNumbers[0]);

	cout << "Just for good measure: bool (pointToNums == &myNumbers[0]) = " << tester << endl;

	return 0;


}
