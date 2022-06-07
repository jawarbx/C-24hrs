#include <iostream>
#include <bitset>
using namespace std;

int main()
{
	cout << "Enter a number (0 - 255): ";
	unsigned short inputNum = 0;
	cin >> inputNum;

	bitset<8> inputBits (inputNum);
	cout << inputNum << " in binary is " << inputBits << endl;

	bitset<8> bitwiseNOT = (~inputNum);
	cout << "Bitwise NOT ~" << endl;
	cout << "~" << inputBits << " = " << bitwiseNOT << endl;

	cout << "Bitwise AND, & with 00001111" << endl;
	bitset<8> bitwiseAND = (0x0F & inputNum);
	cout << "00001111 & " << inputBits << " = " << bitwiseAND << endl;

	cout << "Bitwise OR, | with 00001111" << endl;
	bitset<8> bitwiseOR = (0x0F | inputNum);
	cout << "00001111 | " << inputBits << " = " << bitwiseOR << endl;

	cout << "Bitwise XOR, ^ with 00001111" << endl;
	bitset<8> bitwiseXOR = (0x0F ^  inputNum);
	cout << "00001111 ^ " << inputBits << " = " << bitwiseXOR << endl;

	return 0;


}
