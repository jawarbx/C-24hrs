#include <iostream>
using namespace std;

int main()
{
	const int ARRAY_LENGTH = 5;
	int nums[ARRAY_LENGTH] = {0};

	cout << "Populate array of length " << ARRAY_LENGTH << " with integers." << endl;

	for(int i = 0; i < ARRAY_LENGTH; ++i)
	{
		cout << "Enter an integer for element " << i << ": ";
		cin >> nums[i];
	}

	cout << "Displaying contents of array:" << endl;

	for(int i=0; i<ARRAY_LENGTH; ++i)
	{
		cout << "Element " << i << " = " << nums[i] << endl;
	}

	return 0;


}
