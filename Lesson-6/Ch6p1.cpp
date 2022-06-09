#include <iostream>
using namespace std;

int main()
{
	const int ARRAY_LENGTH = 5;
	int myArray[ARRAY_LENGTH] = {-2, 48, 9, 1, 0};
	cout << "Array forward" << endl;
	for(int i=0; i<ARRAY_LENGTH; i++)
	{
		cout << myArray[i] << " ";

	}
	cout << endl;
	cout << "Array backward" << endl;
	for(int i=ARRAY_LENGTH-1; i>=0; i--)
	{
		cout << myArray[i] << " ";

	}
	cout << endl;

	return 0;



}
