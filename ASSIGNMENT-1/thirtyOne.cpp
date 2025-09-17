#include <iostream>
using namespace std;

int main(){

    int n;

    cout<<"Enter any number : ";
    cin>>n;

    int reversed = 0;
    while(n){
        int rem = n % 10;
        reversed = (reversed*10) + rem;
        n /= 10;
    }

    cout<<"Reversed number is : "<<reversed;

    return 0;
}