#include <iostream>
using namespace std;

int main()
{
	const int ARRAY_LEN = 9;

	int myNumbers[ARRAY_LEN] = {1,-2,3,4,-5,6,67,-89,28};

	int* pointToNums = myNumbers;

	cout << "Display Array using point syntax operator: " << endl;

	for(int index = 0; index < ARRAY_LEN; index++)
	{
		cout << *(myNumbers + index) << endl;

	}

	cout << "Display Array usng array operator: " << endl;

	for(int index = 0; index < ARRAY_LEN; index++)
	{
		cout << pointToNums[index] << endl; 

	}

	return 0;




}
