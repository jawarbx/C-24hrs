#include <iostream>
#include <string>
using namespace std;

int main()
{
	int nums[] = {0, 1, 2, 3, 4, 5};

	cout << "The array elements are: " << endl; 
	for (int num : nums)
		cout << num << " ";
	cout << endl;
	
	string sayHello =  "Hello World!";
	for (auto letter : sayHello)
		cout << letter << " ";
	cout << endl;

	for (auto letter : {'Y', 'o', 'u', 'r',' ', 'm', 'o', 'm'})
		cout << letter << " ";
	cout << endl;

	return 0;


}
