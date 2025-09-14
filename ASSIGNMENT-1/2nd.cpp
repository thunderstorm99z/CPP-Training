/* Write a program to calculate circumference of a circle. */

#include<iostream>
using namespace std;

int main()
{

double Pi = 3.14;
double circumference, radius;

cout<<"Enter the radius of the circle"<<endl;
cin>>radius;

circumference=2*Pi*radius;
cout<<"The circumference of the circle with radius "<<radius<<" = "<<circumference;
    return 0;
}