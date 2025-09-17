#include <iostream>
using namespace std;

int main(){

    int n;
    
    cout<<"Enter any integer : ";
    cin>>n;

    // Method 1 : Using Formula
    // int sum = n*(n+1)/2;

    // Method 2 : Using Loops
    int sum;
    for(int i = 1; i <= n; i++){
        sum += i;
    }

    cout<<"Sum of first "<<n<<" natural numbers is : "<<sum<<endl;

    return 0;
}