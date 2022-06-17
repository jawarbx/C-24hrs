#include <iostream>

using namespace std;

int main()
{
	cout << "How many integers shall I reserve memory for?: ";
	int numberOfEntries = 0;
	cin >> numberOfEntries;

	int* newEntries = new int[numberOfEntries];

	cout << "Memory allocated at " << newEntries << endl;

	delete[] newEntries;



	return 0;

}
