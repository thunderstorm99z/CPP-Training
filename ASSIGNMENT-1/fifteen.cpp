#include <iostream>
using namespace std;

int main(){

    int a,b,c;
    cout<<"Enter three sides of the triangle : ";
    cin>>a>>b>>c;

    if(a+b+c == 180){
        cout<<"The triangle is valid"<<endl;
        if(a == b && b == c){
            cout<<"The triangle is equilateral"<<endl;
        } else if(a == b || b == c || a == c){
            cout<<"The triangle is isosceles"<<endl;
        } else {
            cout<<"The triangle is scalene"<<endl;
        }
    } else {
        cout<<"The triangle is not valid"<<endl;
    }

    return 0;
}