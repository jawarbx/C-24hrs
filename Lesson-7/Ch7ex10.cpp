#include <iostream>
using namespace std;

inline long DoubleNum (int inputNum)
{
	return 2 * inputNum;

}

int main()
{
	cout << "Enter number: ";
	int num = 0;
	cin >> num;

	cout << "Double is " <<DoubleNum(num) << endl;


	return 0;
}
