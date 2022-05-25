#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> dynArray(3); // dynamic array of int
	
	dynArray[0] = -291;
	dynArray[1] = 2038;
	dynArray[2] = 487;

	cout << "Number of integers in array: " << dynArray.size() << endl;

	cout << "Insert another element into array" << endl;
	int newValue = 0;
	cout << "Value to insert?: ";
	cin >> newValue;

	dynArray.push_back(newValue);

	cout << "Number of integers in array: " << dynArray.size() << endl;

	cout << "Last element in array: ";
	cout << dynArray[dynArray.size() - 1] << endl;

	return 0;
}


