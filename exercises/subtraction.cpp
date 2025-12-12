#include <iostream>

using namespace std;

int main() {
    //write a program that show the result of the next operation
    // 1/2 + 1/3 + 1/4 + 1/5 + ... + 1/N
    int N;
    float sum=0;

    cout<<"Enter N: ";
    cin>>N;

    for(float i=2;i<=N;i++) {
        sum += 1/i;
    }

    cout<<"The result is: "<<sum<<endl;

    return 0;
}
