#include <iostream>
using namespace std;

int main()
{
	int* pointsToManyNums = new(nothrow) int[0x1fffffffffff];

	if(pointsToManyNums != NULL)
	{
		cout << "Memory was allocated at " << pointsToManyNums << endl;
		delete[] pointsToManyNums;
		

	}

	else
	{
		cout << "Memory Allocation failed" << endl;
	}



	return 0;

}


