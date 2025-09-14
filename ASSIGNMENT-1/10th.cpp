// Program to input time in HH:MM format and display as 'Hour – HH , Minute – MM'
#include <iostream>
using namespace std;

int main() {
	int hour, minute;
	cout << "Enter time in HH:MM format: ";
	cin >> hour >> minute;
	cout << "Hour - " << hour << ", Minute - " << minute << endl;
	return 0;
}
