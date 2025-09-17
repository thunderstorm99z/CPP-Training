#include <iostream>
using namespace std;

int main(){

    int age;
    cout<<"Enter your age : ";
    cin>>age;

    if(age < 13){
        cout<<"Child"<<endl;
    }else if(age >= 13 && age < 20){
        cout<<"Teenager"<<endl;
    }else if(age >= 20 && age < 45){
        cout<<"Adult"<<endl;
    }else{
        cout<<"Senior"<<endl;
    }

    return 0;
}