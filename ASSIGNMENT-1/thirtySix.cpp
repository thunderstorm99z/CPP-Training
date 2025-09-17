#include <iostream>
using namespace std;

int getLcm(int a, int b){
    int max = (a > b) ? a : b;
    while(true){
        if(max % a == 0 && max % b == 0)
            return max;
        max++;
    }
    return -1;
}

int getHcf(int lcm, int a, int b){
    int ans = (a * b)/lcm;
    return ans;
}

int main(){

    int a,b;

    cout<<"Enter two numbers : ";
    cin>>a>>b;

    int lcm = getLcm(a,b);
    int hcf = getHcf(lcm,a,b);

    if(hcf == 1)
        cout<<"Both numbers are co-prime numbers";
    else 
        cout<<"Not co-prime";
        
    return 0;
}