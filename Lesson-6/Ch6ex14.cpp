#include <iostream>
using namespace std;

int main()
{
	cout << "Which position fibonacci number?: ";
	int position = 1;
	cin >> position;
	unsigned int firstPrevious = 1, secondPrevious = 0;
	unsigned int temp;

	switch(position)
	{
		case 1:
			cout << "The fibonacci number at position " << position << " is " << secondPrevious << endl;
			break;
		case 2:
			cout << "The fibobacci number at position " << position << " is " << firstPrevious << endl;
			break;
		default:
			for(int i=2; i<position; i++)
			{
				temp = firstPrevious;
				firstPrevious += secondPrevious;
				secondPrevious = temp;
			}
			cout << "The fibonacci number at position " << position<< " is " << firstPrevious << endl;
			break;


	}
	return 0;
	

}
