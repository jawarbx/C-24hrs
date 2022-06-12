#include <iostream>
using namespace std;

void DisplayArray(double array[], int length)
{
	for(int i=0; i<length; i++)
	{
		cout << array[i] << " ";
		
	}

	cout << endl;



}

void DoubleArray(double array[], int length)
{
	for(int i=0; i<length; i++)
	{
		cout << 2 * array[i] << " ";
		
	}

	cout << endl;


}

int main()
{
	double myNums[7] = {-3.4, -2.75, 35.7, 9, 100.69, 21.42, -69.96};

	cout << "Displaying array: " << endl; 
	DisplayArray(myNums, 7); 
	cout << "Doubling array: " << endl;
	DoubleArray(myNums, 7); 

	return 0;

}
