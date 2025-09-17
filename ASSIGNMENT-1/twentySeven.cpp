#include <iostream>
using namespace std;

int factorial(int n){
    // Base Case
    if(n == 0 || n == 1)
        return 1;
    
    int factN1 = factorial(n-1);

    return n * factN1;
}
int main(){
    int n;

    cout<<"Enter n : ";
    cin>>n;

    int fact = factorial(n);
    cout<<"Factorial of n : "<<fact<<endl;

    return 0;
}