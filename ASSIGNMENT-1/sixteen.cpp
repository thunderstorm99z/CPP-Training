#include <iostream>
using namespace std;

int main(){

    float temperature;
    cout<<"Enter the temperature: ";
    cin>>temperature;

    bool isCelsius;
    cout<<"Is the input temperature in Celsius? (1 for yes, 0 for no): ";
    cin>>isCelsius;

    if(isCelsius){
        float fahrenheit = (temperature * 9/5) + 32;
        cout<<"Temperature in Fahrenheit: "<<fahrenheit<<endl;
    } else {
        float celsius = (temperature - 32) * 5/9;
        cout<<"Temperature in Celsius: "<<celsius<<endl;
    }

    return 0;
}