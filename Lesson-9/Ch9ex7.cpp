#include <iostream>
using namespace std;

class MyBuffer
{
	private:
		int* myNums;
	
	public:
		MyBuffer(unsigned int length)
		{
			cout << "Constructor allocating for " << length << " integers" << endl;
			myNums = new int[length];
		}

		~MyBuffer()
		{
			cout << "Destructor releasing allocated memory" << endl;
			delete[] myNums;
		}
};

int main()
{
	cout << "How many integers would you like to store?: " << endl;
	unsigned int numsToStore = 0;
	cin >> numsToStore;

	MyBuffer buf(numsToStore);

	return 0;
}
