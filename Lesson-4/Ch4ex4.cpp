#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	cout << "Enter a word NOT longer than 20 characters: ";
	char userInput[21]; // Last character will be null character
	cin >> userInput;

	cout << "Length of user input = " << strlen(userInput) << endl;

	return 0;

}
