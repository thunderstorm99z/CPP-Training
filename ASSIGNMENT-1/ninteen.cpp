#include <iostream>
using namespace std;

int getDaysInMonth(int month, int year) {
    // using switch case to determine number of days in a month
    switch(month) {
        // months with 31 days
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        // months with 30 days
        case 4: case 6: case 9: case 11:
            return 30;
        // February
        case 2:
            // Check for leap year
            return ( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ) ? 29 : 28;
        default:
            return -1; // Invalid month
    }
}

int main(){

    int month, year;
    
    cout<<"Enter Month (1 - 12) : ";
    cin>>month;

    cout<<"Enter Year : ";
    cin>>year;

    if(month < 1 || month > 12){
        cout<<"Invalid month input"<<endl;
    }else{
        int days = getDaysInMonth(month, year);
        cout<<"Number of days in month "<<month<<" of year "<<year<<" is: "<<days<<endl;
    }
    return 0;
}