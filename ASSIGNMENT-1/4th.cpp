/* Write a program to calculate volume of a cuboid. */
// The calculations are unitless

#include<iostream>
using namespace std;

int main()
{

    float length, breadth, height, volume;
    cout<<"Enter the lenth of the cuboid"<<endl;
    cin>>length;
    cout<<"Enter the breadth of the cuboid"<<endl;
    cin>>breadth;
    cout<<"Enter the height of the cuboid"<<endl;
    cin>>height;

    volume=length*breadth*height;
    cout<<"The volume of the cuboid is "<<volume<<endl;

    return 0;
}