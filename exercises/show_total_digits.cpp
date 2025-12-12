#include <iostream>

using namespace std;

int main() {
    //write a program that calculates the number of digits a number has.

    int number, counter;
    cout<<"Enter a number: ";
    cin>>number;
    do {
        number /= 10;
        counter++;
    } while(number != 0);

    cout<<"The number of digits is: "<<counter<<endl;

    return 0;
}
