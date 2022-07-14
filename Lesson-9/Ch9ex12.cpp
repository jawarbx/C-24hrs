#include <iostream>
using namespace std;

class Human
{
	int age;

	public:
		explicit Human(int humansAge)
			:age(humansAge)
		{
			cout << "Explicit constructor" << endl;		
		}

};

void DoSomething(Human person)
{
	cout << "Human did something" << endl;
}

int main()
{
	Human kid(10);
	Human anotherKid = Human(11);
	DoSomething(kid);

	return 0;
}

