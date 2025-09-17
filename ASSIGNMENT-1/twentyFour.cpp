#include <iostream>
using namespace std;

int main(){

    int n;
    
    cout<<"Enter any integer : ";
    cin>>n;

    int sum;
    for(int i = 0; i < n; i++){
        sum += 2*i + 1;
    }

    cout<<"Sum of first "<<n<<" odd natural numbers is : "<<sum<<endl;

    return 0;
}