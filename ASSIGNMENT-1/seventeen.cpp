#include <iostream>
using namespace std;

int main(){

    int start_year , end_year ;

    cout<<"Enter the start year: ";
    cin>>start_year;

    cout<<"Enter the end year: ";
    cin>>end_year;

    cout<<"The leap years between "<<start_year<<" and "<<end_year<<" are: "<<endl;
    for(int year = start_year ; year <= end_year ; year++){
        if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
            cout<<year<<endl;
        }
    }

    return 0;
}