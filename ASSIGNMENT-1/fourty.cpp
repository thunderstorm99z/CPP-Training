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
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (isArmstrong(n)) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }

    return 0;
}