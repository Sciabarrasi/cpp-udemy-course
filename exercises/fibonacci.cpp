#include <iostream>

using namespace std;

int main() {
    /*
        The terms of the Fibonacci sequence are calculated as follows: a1 = 0, a2 = 1, an = an-1 + an-2.
        Design a program that calculates the nth term of the Fibonacci sequence.
                an
            a2
        a1
    values    0 1 1 2 3 5 8 13 21 34 55
    position  0 1 2 3 4 5 6 7  8  9  10
    */
    int N, a1=0, a2=1, an;
    cout<<"Ingrese N: ";
    cin>>N;

    if (N < 2){
        cout<<"El n-esimo término es: "<<N<<endl;
    } else {
        for(int i=2;i<=N;i++){
            an = a1+a2;
            a1 = a2;
            a2 = an;
        }
        cout<<"El n-esimo termino es: "<<an<<endl;
    }




    return 0;
}
