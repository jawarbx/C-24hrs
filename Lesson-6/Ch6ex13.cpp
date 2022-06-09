#include <iostream>
using namespace std;

int main()
{
	const int NUM_ROWS = 3;
	const int NUM_COLUMNS = 4;

	int myInts[NUM_ROWS][NUM_COLUMNS] = {{2, 3, -45, 90},
										{15, -24, -20, 8},
										{1, 9, 27, 11}};
	cout << "Matrix Display: " << endl;
	for(int i=0; i<NUM_ROWS; i++)
	{
		for(int j=0; j<NUM_COLUMNS; j++)
		{

			switch(j)
			{
				case 0:
					cout << "[ " << myInts[i][j] << " ";
					break;
				case NUM_COLUMNS - 1:
					cout << myInts[i][j] << " ]";
					break;
				default:
					cout << myInts[i][j] << " ";
					break;
				
			}

		}
		cout << endl;
	}



	return 0;

}
