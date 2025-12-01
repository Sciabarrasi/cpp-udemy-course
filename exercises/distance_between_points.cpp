
#include <iostream>
#include <cmath>

using namespace std;

int main () {
    /* Calculate the distance between two points (P_1 and P_2)
    located on a XY plane.
    root((x2-x1)^2 + (y2-y1)^2) **/

    int x1,y1,x2,y2;
    double distance;

    cout<<"Enter point 1: "<<endl;
    cout<<"X : ";
    cin>>x1;
    cout<<"Y: ";
    cin>>y1;


    cout<<"Enter point 2: "<<endl;
    cout<<"X : ";
    cin>>x2;
    cout<<"Y: ";
    cin>>y2;

    distance = sqrt(pow(x2-x1,2) + pow(y2-y1,2));

    cout<<"The distance is: "<<distance<<endl;
    return 0;
}
