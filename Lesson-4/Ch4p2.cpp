#include <iostream>

int main()
{
	int myNumbers[5];
	myNumbers[4] = 450; // myNumbers[5] does not exist. The highest index is 4
	std::cout << myNumbers[4] << std::endl;
	return 0;
}
