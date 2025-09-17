#include <iostream>
using namespace std;

// Function to check if the number is already in the fibonacci series or not
bool isFibonacci(int num) {
    // Base Cases
    if (num == 0 || num == 1)
        return true;

    int a = 0, b = 1, c = a + b;

    // Iterarting till the number is in fibonacci surpasses the passed number(num)
    while (c <= num) {
        // Checking for each fibonacci number
        if (c == num)
            return true;

        a = b;
        b = c;
        c = a + b;
    }

    return false;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (isFibonacci(num)) {
        cout << num << " is in the Fibonacci series." << endl;
    } else {
        cout << num << " is not in the Fibonacci series." << endl;
    }

    return 0;
}