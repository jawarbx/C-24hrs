#include <iostream>
using namespace std;

int main()
{
    int signedSize = sizeof(short int);
    int unsignedSize = sizeof(unsigned short int);
    int longSize = sizeof(long);

    cout << signedSize << endl;
    cout << unsignedSize << endl;
    cout << longSize << endl;

    return 0;
}