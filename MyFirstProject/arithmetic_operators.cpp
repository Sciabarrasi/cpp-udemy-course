
#include <iostream>

using namespace std;

int main() {
    int number1 = 7;
    int number2 = 3;
    int mod = number1%number2;
    int quotient = number1/number2;
    int multiplication = number1*number2;
    int addition = number1+number2;

    cout<<mod<<endl;
    cout<<quotient<<endl;
    cout<<multiplication<<endl;
    cout<<addition<<endl;


    //integer division and royal division
    cout<< 7/3 <<endl //integer division
    cout<< 7.0/3 <<endl // royal division

    return 0;
}
