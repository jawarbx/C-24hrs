#include <iostream>
#include <string>
using namespace std;

class Human
{
	int age;
	string name;

	public:
		Human()
		{
			cout << "Constructed human. " << endl;
		}

		void SetName(string inputName) {name = inputName;}
		void GetName() {cout << name << endl;}

};

int main()
{
	Human adam;
	adam.SetName("Adam");
	adam.GetName();

	return 0;
}
