#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Enter line of text: " << endl;
	string userInput;
	getline(cin, userInput);

	char copyInput[20] = {};
	if (userInput.length() < 20)
	{
		cout << "String within bounds. Creating copy." << endl;
		userInput.copy(copyInput, userInput.length());
		cout << "Copy created! copyInput = " << copyInput << endl;
	}
	else
		"String out of bounds. Cannot copy.";

	return 0;


}
