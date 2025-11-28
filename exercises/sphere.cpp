#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Write a program that allow us to find the volume of a sphere
    // V = 4/3PI*R^3

    const float PI = 3.14159;
    float radius, volume;

    cout<<"Enter the radius of the sphere: ";
    cin>>radius;

    volume = 4/3*PI*pow(radius,3);

    cout<<"The volume of the sphere is: "<<volume;

    return 0;
}
