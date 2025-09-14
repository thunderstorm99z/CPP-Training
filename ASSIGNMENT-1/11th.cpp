// Program to input three characters and display their ASCII codes using conditional statements
#include <iostream>
using namespace std;

int main() {
	char ch1, ch2, ch3;
	cout << "Enter three characters: ";
	cin >> ch1 >> ch2 >> ch3;

	if (ch1) {
		cout << "Character '" << ch1 << "' has ASCII code " << int(ch1) << endl;
	}
	if (ch2) {
		cout << "Character '" << ch2 << "' has ASCII code " << int(ch2) << endl;
	}
	if (ch3) {
		cout << "Character '" << ch3 << "' has ASCII code " << int(ch3) << endl;
	}
	return 0;
}
