#include <iostream>
using namespace std;

class MyBuffer
{
	private:
		int* myNums;

	public:
		MyBuffer(unsigned int length)
		{
			myNums = new int[length];
		}

		~MyBuffer()
		{
			delete[] myNums;
		}

};

class Human
{
	private:
		int age;
		string name;
		string gender;

	public:
		Human(const string& inputName, int inputAge, string inputGender)
			:name(inputName), age(inputAge), gender(inputGender){}

		int GetAge() {return age;};

};

int main()
{
	MyBuffer buf1(5);
	MyBuffer buf2(200);

	cout << "sizeof(MyBuffer) = " << sizeof(MyBuffer) << endl;
	cout << "sizeof(buf1) = " << sizeof(buf1) << endl;
	cout << "sizeof(buf2) = " << sizeof(buf2) << endl;

	Human firstMan("Adam", 25, "man");
	Human firstWoman("Eve", 28, "woman");

	cout << "sizeof(Human) = " << sizeof(Human) << endl;
	cout << "sizeof(firstMan) = " << sizeof(firstMan) << endl;
	cout << "sizeof(firstWoman) = " << sizeof(firstWoman) << endl;

	return 0;
}
