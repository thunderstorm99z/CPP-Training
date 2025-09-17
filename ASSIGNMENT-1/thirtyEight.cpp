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

    int start = 0;
    int end = 100;

    cout<<"Enter Starting Number : ";
    cin>>start;

    cout<<"Enter Ending Number : ";
    cin>>end; 

    while(start <= end){
        if(isPrime(start))
            cout<<start<<" ";
        start++;
    }
    
    return 0;
}