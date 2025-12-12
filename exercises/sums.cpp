#include <iostream>

using namespace std;

int main() {
    //write a program that read some values until enter a negative number. Then show the sum of these.
    float number, sum=0;

    do {
        cout<<"Number: ";
        cin>>number;

        if (number>=0){
            sum += number;
        }
    } while(number >= 0);
    cout<<"The total is: "<<sum<<endl;

    return 0;
}
