#include <iostream>

using namespace std;

int main() {
    /*
        Build a program that allows converting a temperature in degrees Celsius to Fahrenheit (((c*9)/5)+2 = F)
        and Kelvin (C = K-273.15).
    */
    float celsius, fahrenheit, kelvin;
    cout<<"Enter the degrees Celsius: ";
    cin>>celsius;

    fahrenheit = celsius*9/5+32;
    kelvin = celsius + 273.15;

    cout<<"The degrees in kelvin are: "<<kelvin<<endl;
    cout<<"The degrees in fahrenheit are: "<<fahrenheit<<endl;


    return 0;
}
