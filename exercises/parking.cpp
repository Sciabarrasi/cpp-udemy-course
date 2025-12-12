#include <iostream>

using namespace std;

int main() {
    /*
    In a parking lot, they charge $1.50 per hour or fraction of an hour.
    Design a program that determines how much a customer must pay for parking their vehicle,
    given the parking time in hours and minutes.
    */
    int hours, minutes;
    float total;
    float parking_price = 1.50;

    cout<<"Enter the total hours: ";
    cin>>hours;
    cout<<"Enter the minutes: ";
    cin>>minutes;

    if (minutes > 0){
        hours++; // its the same to hours = hours + 1
    }
    total = hours*parking_price;
    cout<<"The total you have to pay is: "<<total<<endl;

    return 0;
}
