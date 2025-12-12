#include <iostream>

using namespace std;

//we can declare the int i = 100 var and they got a global scope
//int i = 100;
int main() {

    int i = 100;
    for(int i=1;i<=10;i++){
        cout<<i<<endl;
        if(true) {
            int i = -1; // they return always the "-1" value. Because is a scope concept problem.
            cout<<i<<endl;
        }
    }

    return 0;
}
