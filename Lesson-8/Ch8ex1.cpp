#include <iostream>
using namespace std;

int main()
{
	int age = 30;
	const double Pi = 3.14159265;

	cout << "Integer 'age' is stored at " << &age << endl;
	cout << "Double 'Pi' is stored at " << &Pi << endl;

	return 0;

}
