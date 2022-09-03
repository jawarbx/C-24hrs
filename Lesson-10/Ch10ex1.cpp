#include <iostream>
using namespace std;

class Fish
{
	public:
		bool isFreshWater;

		void fishType()
		{
			if(isFreshWater)
				cout << "Swims in the river" << endl;
			else
				cout << "Swims in the sea" << endl;
		}
};

class Tuna: public Fish
{
	public:
	Tuna()
	{
		isFreshWater = false;
	}

};

class Salmon: public Fish
{
	public:
		Salmon()
		{
			isFreshWater = true;
		}
};

int main()
{
	Salmon myLunch;
	Tuna myDinner;

	myLunch.fishType();
	myDinner.fishType();

	return 0;
}
