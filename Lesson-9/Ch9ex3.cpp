#include <iostream>
#include <string>
using namespace std;

class Human
{
	private:
		string name;
		int age;
	public:

		Human()
		{
			age = 1;
			cout << "Constructed an instance of class Human" << endl;
		}

		void SetName(string humansName)
		{
			name = humansName;
		}

		void SetAge(int humansAge)
		{
			age = humansAge;
		}

		void IntroduceSelf()
		{
			cout << "I am " + name << " and am ";
			cout << age << " years old" << endl;
		}


};

int main()
{
	Human firstWoman;
	firstWoman.SetName("Eve");

	firstWoman.IntroduceSelf();

	return 0;

}





