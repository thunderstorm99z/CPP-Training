// Program to input date in DD/MM/YYYY format and display as 'Day – DD , Month – MM , Year – YYYY'
#include <iostream>
using namespace std;

int main() {
	int day, month, year;
	
	cout << "Enter date in DD/MM/YYYY format: ";
	cin >> day >> month >> year;
	cout << "Day - " << day << ", Month - " << month << ", Year - " << year << endl;
	return 0;
}
