#include <iostream>
using namespace std;

int main(){

    int marks;
    cout<<"Enter your marks : ";
    cin>>marks;

    if(marks < 33){
        cout<<"Fail(F)"<<endl;
    }else if(marks >=33 && marks < 50){
        cout<<"Pass(D)"<<endl;
    }else if(marks >= 50 && marks < 70){
        cout<<"Pass(C)"<<endl;
    }else if(marks >= 70 && marks < 85){
        cout<<"Pass(B)"<<endl;
    }else if(marks >= 85 && marks <= 100){
        cout<<"Pass(A)"<<endl;
    }else{
        cout<<"Invalid Marks"<<endl;
    }

    return 0;
}