#include <iostream>
#include <string>
using namespace std;

class Human
{
public:
	string name;
	int age;

	void IntroduceSelf()
	{
		cout << "My name is " + name;
		cout << " and I am " << age << " years old" << endl;
	}


};

int main()
{
	Human firstMan;
	firstMan.name = "Adam";
	firstMan.age = 30;
	firstMan.IntroduceSelf();

	Human firstWoman;
	firstWoman.name = "Eve";
	firstWoman.age = 32;
	firstWoman.IntroduceSelf();

	return 0;

}

