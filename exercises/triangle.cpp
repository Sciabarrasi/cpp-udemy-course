
#include <iostream>

using namespace std;

int main() {
    // Write a program tbat allow us to find the area of a triangle

    float base, height, area;

    cout<<"Enter the base of the triangle: ";
    cin>>base;

    cout<<"Enter the height of the triangle: ";
    cin>>height;

    area = (base*height)/2;

    cout<<"The area of the triangle is: "<<area<<endl;

    return 0;
}
