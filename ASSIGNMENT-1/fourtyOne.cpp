#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is an Armstrong number
bool isArmstrong(int n) {
    int original = n;
    int sum = 0;
    int digits = 0;

    // Count the number of digits
    while (n > 0) {
        digits++;
        n /= 10;
    }

    n = original;

    // Calculate the sum of the digits raised to the power of the number of digits
    while (n > 0) {
        int digit = n % 10;
        sum += pow(digit, digits);
        n /= 10;
    }

    return sum == original;
}

int main() {
    cout << "Armstrong numbers under 1000 are: " << endl;

    for (int i = 1; i < 1000; i++) {
        if (isArmstrong(i)) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}