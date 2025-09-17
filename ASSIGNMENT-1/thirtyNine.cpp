#include <iostream>
using namespace std;

bool isPrime(int n){
    for(int i = 2; i < n; i++){
        if(n % i == 0)
            return false;
    }
    return true;
}

int main(){

    int n;

    cout<<"Enter Any Number : ";
    cin>>n;

    int i = n + 1;
    while(!isPrime(i)){
        i++;
    }
    cout<<"Prime Number After the Entered Number is "<<i<<endl;
    
    return 0;
}