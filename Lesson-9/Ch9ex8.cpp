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

void UseMyBuf(MyBuffer copyBuf)
{
	cout << "Copy of buf will be destructed when function ends" << endl;
}

int main()
{
	cout << "How many integers would you like to store?: " << endl;
	unsigned int numsToStore = 0;
	cin >> numsToStore;

	MyBuffer buf(numsToStore);
	UseMyBuf(buf);

	return 0;
}
