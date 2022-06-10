#include <iostream>
#include <string>
using namespace std;

int main()
{
	enum RainbowColors
	{
		Red = 0,
		Orange,
		Yellow,
		Green,
		Blue,
		Indigo,
		Violet
	};

	cout << "Input color code (Red = 0, Orange, Green, etc.): ";
	int userChoice = 0;
	cin >> userChoice;

	switch(userChoice)
	{
		case Red:
		case Orange:
		case Yellow:
		case Green:
		case Blue:
		case Indigo:
		case Violet:
			cout << "That color is in the rainbow." << endl;
			break;
		default:
			cout << "That color is not in the rainbow." << endl;
			break;
	}


	

	return 0;
}
