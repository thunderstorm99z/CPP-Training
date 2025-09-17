#include <iostream>
#include <cmath>
using namespace std;

int main(){

    double radius;
    cout<<"Enter the radius of the circle: ";
    cin>>radius;

    double circumference = 2 * M_PI * radius;
    cout<<"The circumference of the circle is: "<<circumference<<endl;

    return 0;
}