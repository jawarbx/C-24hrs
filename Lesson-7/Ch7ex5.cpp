#include <iostream>
using namespace std;

int Fibonacci(int position)
{
	if(position < 2)
	{
		return position;

	}
	else
		return Fibonacci(position - 1) + Fibonacci(position - 2);
	

}

int main()
{
	cout << "Enter 0-based index of fibonacci number: ";
	int index = 0;
	cin >> index;

	cout << "The fibonacci number at position " << index << " is " << Fibonacci(index) << endl;


	return 0;
}
