#include <iostream>
using namespace std;

int main(){

    string Time;
    cout<<"Enter time in HH:MM format: ";
    cin>>Time;

    cout<<"You entered time as: "<<Time<<endl;

    cout<<"Converted Format: "<<Time.substr(0,2)<<" hour and "<<Time.substr(3,2)<<" Minute"<<endl;
}