#include <iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter n : ";
    cin>>n;

    int count = 0;
    while(n){
        count++;
        n = n/10;
    }

    cout << "No of digits : " << count <<endl;

    return 0;
}