#include <iostream>
using namespace std;

int main()
{
	int ARRAY1_LENGTH = 3;
	int ARRAY2_LENGTH = 2;

	int myArr1[3] = {-20, -4, 14};
	int myArr2[2] = {25, 78};

	cout << "Contents of myArr1:" << endl;

	for(int i=0; i<ARRAY1_LENGTH; i++)
	{
		cout << myArr1[i] << " ";	
	}
	cout << endl;

	cout << "Contents of myArr2:" << endl;

	for(int j=0; j<ARRAY2_LENGTH; j++)
	{
		cout << myArr2[j] << " ";	
	}
	cout << endl;

	for(int i = ARRAY1_LENGTH - 1; i >= 0; i--)
	{
		for(int j = ARRAY2_LENGTH - 1; j >= 0; j--)
		{
			cout << "myArr1" << "[" << i << "]" << " x " \
				<< "myArr2" << "[" << j << "]" << " = " \
				<< myArr1[i] * myArr2[j] << endl;
		}

	}
	return 0;
}
