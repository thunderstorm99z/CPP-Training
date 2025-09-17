#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cout << "Enter four numbers: ";
    cin >> a >> b >> c >> d;

    // Considering a as a the largest number initially
    int maxNum = a;

    // checking with other numbers
    if (b > maxNum) maxNum = b;
    if (c > maxNum) maxNum = c;
    if (d > maxNum) maxNum = d;

    cout << "The largest number is: " << maxNum << endl;

    return 0;
}