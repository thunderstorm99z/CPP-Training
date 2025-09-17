#include <iostream>
using namespace std;

int main(){

    int n;
    
    cout<<"Enter any integer : ";
    cin>>n;

    int sum;
    for(int i = 1; i <= n; i++){
        sum += 2*i;
    }

    cout<<"Sum of first "<<n<<" even natural numbers is : "<<sum<<endl;

    return 0;
}