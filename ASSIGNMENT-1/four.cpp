#include <iostream>
using namespace std;

int main(){

    double length, width, height;

    cout<<"Enter the length of the cuboid: ";
    cin>>length;

    cout<<"Enter the width of the cuboid: ";
    cin>>width; 

    cout<<"Enter the height of the cuboid: ";
    cin>>height;

    double vol = length * width * height;
    cout<<"The volume of the cuboid is: "<<vol<<endl;

    return 0;
}