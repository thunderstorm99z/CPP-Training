#include <iostream>
using namespace std;

int calculateLCM(int a, int b) {
    // initializing with the largest no 
    int maxNum = (a > b) ? a : b;

    // Running till the number is completely divided by both
    while (true) {
        if (maxNum % a == 0 && maxNum % b == 0) return maxNum;
        maxNum++;
    }
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int lcm = calculateLCM(num1, num2);
    cout << "The LCM of " << num1 << " and " << num2 << " is " << lcm << endl;

    return 0;
}