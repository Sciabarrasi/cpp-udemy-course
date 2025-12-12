#include <iostream>

using namespace std;

int main() {
    // write a program that return if a number is positive, negative or neutral
    int number;

    cout<<"Enter the number: "<<endl;
    cin>>number;

    if (number > 0) {
        cout<<"Number is positive."<<endl;
    } else if (number == 0) {
        cout<<"Number is neutral."<<endl;
    } else {
        cout<<"Number is negative."<<endl;
    }

    return 0;
}
