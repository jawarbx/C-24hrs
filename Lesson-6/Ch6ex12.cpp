#include <iostream>
using namespace std;

int main()
{
	
	const int ARRAY1_LEN = 3;
	const int ARRAY2_LEN = 2;
	int array1[ARRAY1_LEN]; 
	int array2[ARRAY2_LEN];


	cout << "Insert 3 integers into array 1: " << endl;
	for (int i = 0; i < ARRAY1_LEN; i++)
	{
		cout << "Element " << i << ": ";
		cin >> array1[i];
	}

	cout << "Insert 2 integers into array 2: " << endl;
	for (int i = 0; i < ARRAY2_LEN; i++)
	{
		cout << "Element " << i << ": ";
		cin >> array2[i];
	}

	for(int i = 0; i < ARRAY1_LEN; i++)
	{
		for(int j = 0; j < ARRAY2_LEN; j++)
		{
			cout << "Element " << i << " of array1 " << " x " << " element " << j << " of array 2 = " \
				<< array1[i] * array2[j] << endl;

		}

	}

	return 0;


}
