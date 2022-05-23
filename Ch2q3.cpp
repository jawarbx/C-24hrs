#include <iostream>
using namespace std;

//Define previously declared function
int DemoConsoleOutput() {
	cout << "This is a simple string literal" << endl;
	cout << "Writing number sixty-nine: " << 5 << endl;
	cout << "Performing subtraction 69 - 10 = " << 69 - 10 << endl;
	cout << "Your mom is this fat = " << 22.0 * 7 << endl;

	return 0;
}

int main() {
	// Call function
	DemoConsoleOutput();

	return 0;
}

