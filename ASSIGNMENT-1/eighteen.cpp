#include <iostream>
using namespace std;

int main(){
    int a,b,c;

    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;

    if(a == b && b == c && c == a){
        cout<<"All numbers are equal"<<endl;
    }else if(a == b || b == c || c == a){
        cout<<"Two numbers are equal"<<endl;
    }else{
        if(a > b && a > c){
            // a is largest
            if(b > c){
                cout<<"The second largest number is: "<<b<<endl;
            }else{
                cout<<"The second largest number is: "<<c<<endl;
            }
        }else if(b > a && b > c){
            // b is largest
            if(a > c){
                cout<<"The second largest number is: "<<a<<endl;
            }else{
                cout<<"The second largest number is: "<<c<<endl;
            }
        }else{
            // c is largest
            if(a > b){
                cout<<"The second largest number is: "<<a<<endl;
            }else{
                cout<<"The second largest number is: "<<b<<endl;
            }
        }
    }
}