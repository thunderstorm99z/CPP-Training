#include <iostream>
using namespace std;

int main(){

    char a,b,c;
    cout<<"Enter first character: ";  
    cin>>a;
    cout<<"Enter second character: ";
    cin>>b;
    cout<<"Enter third character: ";
    cin>>c;

    int ascii_a = int(a);
    int ascii_b = int(b);  
    int ascii_c = int(c);

    cout<<"ASCII value of "<<a<<" is "<<ascii_a<<endl;
    cout<<"ASCII value of "<<b<<" is "<<ascii_b<<endl;
    cout<<"ASCII value of "<<c<<" is "<<ascii_c<<endl;
    
    return 0;
}