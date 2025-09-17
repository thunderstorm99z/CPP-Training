#include <iostream>
using namespace std;

int main(){

    int dividend, divisor;
    cout << "Enter dividend: ";
    cin >> dividend;

    cout << "Enter divisor: ";
    cin >> divisor;

    if(dividend % divisor == 0){
        cout << dividend << " is divisible by " << divisor << endl;
    } else {
        cout << dividend << " is not divisible by " << divisor << endl;
    }
}