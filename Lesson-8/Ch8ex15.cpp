#include <iostream>
using namespace std;

int main()
{
	try
	{

		int* pointsToManyNums = new int[0x1fffffffffffff];

		delete[] pointsToManyNums;

	}
	catch (bad_alloc)
	{
		cout << "Memory allocation failed. Ending Program" << endl;

	}
	return 0;

}
