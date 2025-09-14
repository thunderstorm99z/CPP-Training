/* Write a program to calculate average of three integers. 
Numbers are given by the user. */

#include<iostream>
using namespace std;

int main()
{

int a,b,c,avg;

cout<<"Enter the 3 numbers"<<endl;
cin>>a; 
cin>>b;
cin>>c;

avg=(a+b+c)/2;
cout<< "the average of "<<a<<"+"<<b<<"+"<<c<<" is "<<avg<<endl;

    return 0;
}