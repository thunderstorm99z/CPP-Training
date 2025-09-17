#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter any positive integer : ";
    cin>>n;

    int sum;
    for(int i = 1; i <= n; i++){
        sum += (i*i*i);
    }

    cout<<"Sum of the cube of the first "<<n<<" natural number is : "<<sum<<endl;

    return 0;
}