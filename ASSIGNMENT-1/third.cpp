#include <iostream>
using namespace std;

int main(){

    double principle, rate, time, simple_interest;

    cout<<"Enter Principle Amount : ";
    cin>>principle;

    cout<<"Enter Rate of Interest : ";
    cin>>rate;  

    cout<<"Enter Time (in years) : ";
    cin>>time;

    simple_interest = (principle * rate * time) / 100;
    cout<<"Simple Interest = "<<simple_interest<<endl;

    return 0;
}