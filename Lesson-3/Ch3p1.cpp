#include <iostream>

int main()
{
	using namespace std;
	enum YourCards { Ace, Jack, Queen, King };

    YourCards testCard = YourCards::Queen;
    cout << testCard << endl;

    return 0;
}
