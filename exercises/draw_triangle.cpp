#include <iostream>

using namespace std;

int main() {
    /*
        Write a program that draws a right triangle using some character.
        Enter the value of N through the console, where N is the base and height of the triangle.
        Example: N = 4
        *
        **
        ***
        ****
    */
    int N;
    cout<<"Enter N: ";
    cin>>N;

    for(int i=1;i<=N;i++){
        for(int e=1;e<=i;e++){
            cout<<"*";
        }
        cout<<endl;
    }




    return 0;
}
