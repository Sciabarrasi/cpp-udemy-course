#include <iostream>

using namespace std;

int main() {
    // Write a program that can read 3 grades and show the final average
    float grade1, grade2, grade3, finalAverage;

    cout<<"Grade 1: ";
    cin>>grade1;

    cout<<"Grade 2: ";
    cin>>grade2;

    cout<<"Grade 3: ";
    cin>>grade3;

    finalAverage = (grade1 + grade2 + grade3)/3;
    cout<<"The final average is: "<<finalAverage;


    return 0;
}
