#include <iostream>
using namespace std;

//Define previously declared function
int DemoConsoleOutput() {
	cout << "This is a simple string literal" << endl;
	cout << "Writing number sixty-nine: " << 5 << endl;
	cout << "Performing division 69 / 10 = " << 69 / 10 << endl;
	cout << "Pi is 22 / 7 = " << 22.0 / 7 << endl;

	return 0;
}

int main() {
	// Call function
	DemoConsoleOutput();

	return 0;
}

