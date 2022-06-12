#include <iostream>
using namespace std;

void DisplayArray(int numbers[], int length)
{
	for(int i=0; i<length; i++)
	{
		cout << numbers[i] << " ";

	}
	cout << endl;

}

void DisplayArray(char characters[], int length)
{
	for(int i=0; i<length; i++)
	{
		cout << characters[i] << " ";

	}
	cout << endl;

}

int main()
{
	int myNums[4] = {24, 58, -1, 245};
	DisplayArray(myNums, 4);

	char myChars[7] = {'H', 'e', 'l', 'l', 'o', '!', '\0'};
	DisplayArray(myChars, 7);

	return 0;


}
