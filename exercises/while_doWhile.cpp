#include <iostream>

using namespace std;

int main() {
    // while and do while
    int number = 5;
    while(number == 6) {
        cout<<"Running the while condition."<<endl;
    }

    do {
        cout<<"Running the do while condition."<<endl;
    } while(number == 5);

    return 0;
}
