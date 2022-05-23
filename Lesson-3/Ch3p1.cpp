#include <iostream>
using namespace std;
enum YourCards
{
    Ace = 43,
    Jack,
    Queen,
    King
};


int main()
{
    YourCards testCard = YourCards::Queen;
    cout << testCard << endl;

    return 0;
}