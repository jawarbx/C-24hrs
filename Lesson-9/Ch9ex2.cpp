#include <iostream>
#include <string>
using namespace std;

class Human
{
	private:
		int age;
		string name;
	public:
		int GetAge()
		{
			return age;

		}

		void SetAge(int& humansAge)
		{
			age = humansAge;

		}

};

int main()
{
	Human eve;

	cout << "Set Age: ";
	int inputAge = 0;
	cin >> inputAge;
	eve.SetAge(inputAge);
	cout << "I guess Eve is " << eve.GetAge();

	return 0;

}
