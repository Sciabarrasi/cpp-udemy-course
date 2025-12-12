#include <iostream>

using namespace std;

int main() {
    int number_case;
    cout<<"Enter a number: ";
    cin>>number_case;

    switch(number_case){
    case 1:
        cout<<"Case 1."<<endl;
        break;
    case 2:
        cout<<"Case 2."<<endl;
        break;
    case 3:
        cout<<"Case 3."<<endl;
        break;
    default:
        cout<<"Is not a case"<<endl;
    }

    return 0;
}
