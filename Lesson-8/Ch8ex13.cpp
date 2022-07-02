#include <iostream>
using namespace std;

int main()
{

	bool* isSunny;

	cout << "Is it sunny (y/n)? ";
	char userInput = 'y';
	cin >> userInput;

	if(userInput == 'y')
	{
		isSunny = new bool;
		*isSunny = true;

	}

	cout << "Boolean sunny flag says: " << *isSunny << endl;

	delete isSunny; //Note that this only work if userInput is y. Otherwise, there is a crash because new was not invoked

	return 0;

}
