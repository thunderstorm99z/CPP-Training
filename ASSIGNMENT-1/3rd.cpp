/* Write a program to calculate simple interest.  */

#include<iostream>
using namespace std;

int main()
{

    double interest, principal, rate, time;
    cout<<"Enter the principal amount"<<endl;
    cin>>principal;
    cout<<"Enter the rate of interest in percentage"<<endl;
    cin>>rate;
    cout<<"Enter the time in years"<<endl;
    cin>>time;

    interest=(principal*rate*time)/100;
    cout<<"The simple interest is "<<interest<<endl;

    return 0;
}