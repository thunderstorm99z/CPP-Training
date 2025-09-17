#include <iostream>
using namespace std;

int fibbonacci(int n){
    if(n == 0)
        return 0;
    
    if(n == 1)
        return 1;

    int fibN1 = fibbonacci(n-1);
    int fibN2 = fibbonacci(n-2);

    return fibN1 + fibN2;
}
int main(){

    int n;
    
    cout<<"Enter any integer : ";
    cin>>n;

    int result = fibbonacci(n);

    cout<<n<<"th fibonacci number is "<<result<<endl;

    return 0;
}