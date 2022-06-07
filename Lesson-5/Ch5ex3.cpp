#include <iostream>
using namespace std;

int main()
{
	cout << "Use boolean value (0 or 1) to answer" << endl;
	cout << "Is it raining? ";
	bool isRaining = false;
	cin >> isRaining;


	cout << "Do you have buses on the streets? ";
	bool busesPly = false;
	cin >> busesPly;

	if (isRaining && !busesPly)
		cout << "You cannot go to work" << endl;
	else
		cout << "You can go to work" << endl;

	if (isRaining && busesPly)
		cout << "Take an umbrella" << endl;

	if((!isRaining) && busesPly)
		cout << "Enjoy the sunny day" << endl;

	return 0;


}
