#include <iostream>

using namespace std;

int main() {
    //write a program that return if a number is even or not
    int number;

    cout<<"Enter the number: ";
    cin>>number;

    if (number % 2 == 0) {
        cout<<"Is even"<<endl;
    } else {
        cout<<"Is not even"<<endl;
    }

    return 0;
}
