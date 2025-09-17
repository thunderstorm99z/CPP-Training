#include <iostream>
using namespace std;

int main(){

    string Date;
    cout<<"Enter date in DD/MM/YYYY format: ";
    cin>>Date;

    cout<<"You entered date as: "<<Date<<endl;

    cout<<"Converted Format: Day - "<<Date.substr(0,2)<<" Month - "<<Date.substr(3,2)<<" Year - "<<Date.substr(6,4)<<endl;
}