#include <iostream>
using namespace std;

int main()
{
	int age = 30;
	int* pointsToAge = &age;

	cout << "Integer age is stored at " << pointsToAge << endl;

	return 0;

}
