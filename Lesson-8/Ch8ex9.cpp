#include <iostream>
using namespace std;

int main()
{
	cout << "How many integers do you wish to enter?: ";
	int numEntries = 0;
	cin >> numEntries;

	int* myNums = new int[numEntries];

	cout << "Allocated for " << numEntries << " integers." << endl;

	for(int i = 0; i < numEntries; i++)
	{
		cout << "Enter number: " << i << ": ";
		cin >> *(myNums + i);

	}

	cout << "Displaying all numbers entered: " << endl;

	for(int j = 0; j < numEntries; j++)
	{
		cout << *(myNums++) << " ";

	}

	cout << endl;
	
	myNums -= numEntries;

	delete[] myNums;

	return 0;

}
