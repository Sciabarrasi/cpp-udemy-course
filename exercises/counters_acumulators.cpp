#include <iostream>

using namespace std;

int main() {
    int counter = 0, acumulator = 0;

    while (counter <= 10) {
        cout<<counter<<endl;
        counter++;
        acumulator += counter;
    }
    cout<<"Counter: "<<counter<<endl;
    cout<<"The value of acumulator is: "<<acumulator<<endl;

    return 0;
}
