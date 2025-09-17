#include <iostream>
using namespace std;

int main() {
    int n;

    cout<<"Enter any integer: ";
    cin>>n;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j <= (n/2) && i > j && (i + j) <= n)
                cout<<"* ";
            else if(j > (n/2) && i < j && (i + j) > n)
                cout<<"* ";
            else if(i == j || (i + j) == (n+1) )
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    
    return 0;
}