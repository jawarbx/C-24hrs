#include <iostream>
using namespace std;

class Fish
{
	protected:
		bool isFreshWaterFish;

	public:
		void Swim()
		{
			if(isFreshWaterFish)
				cout << "Swims in lake" << endl;
			else
				cout << "Swims in sea" << endl;
		}
};

class Tuna: public Fish
{
	public:
		Tuna()
		{
			isFreshWaterFish = false;
		}
};

class Salmon: public Fish
{
	public:
		Salmon()
		{
			isFreshWaterFish = true;
		}
};

int main()
{
	Salmon myLunch;
	Tuna myDinner;

	myLunch.Swim();
	myDinner.Swim();

	return 0;
}

