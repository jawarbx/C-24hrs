#include <iostream>
using namespace std;

int main()
{
	int* pointsToAnAge = new int;

	cout << "Enter your dog's age: ";
	cin >> *pointsToAnAge;

	cout << "Age is stored at " << pointsToAnAge << endl;

	delete pointsToAnAge;

	return 0;


}
