#include <iostream>

using namespace std;

int main() {
    /*
    Enter the worker's salary, category, stable condition (S) or non-stable (N), and report the total payment to be made according to the following.
    The bonus percentage relative to the salary is calculated based on the following table:
    Category:
    A -> (Stable) 20% -> (Non-Stable) 17%
    B -> (Stable) 18% -> (Non-Stable) 15%
    C -> (Stable) 15% -> (Non-Stable) 14%
    D -> (Stable) 12% -> (Non-Stable) 10%

    The discount calculation is based on the salary + bonus: Stable 6%, Non-Stable 4%
    */
    float salary;
    char category, condition;

    cout<<"Enter your Category (A, B, C or D): ";
    cin>>category; //A, B, C, D

    cout<<"Enter your condition (Stable = S or Non-Stable = N): ";
    cin>>condition; // S or N

    cout<<"Enter your salary: ";
    cin>>salary;

    if(condition == 'S') {
        switch(category){
            case 'A': salary = salary*1.20; break;
            case 'B': salary = salary*1.18; break;
            case 'C': salary = salary*1.15; break;
            case 'D': salary = salary*1.12; break;
        }
        salary = salary*0.94;
    } else if(condition == 'N'){
            switch(category){
            case 'A': salary = salary*1.17; break;
            case 'B': salary = salary*1.15; break;
            case 'C': salary = salary*1.14; break;
            case 'D': salary = salary*1.10; break;
        }
        salary = salary*0.96;
    }

    cout<<"The final salary is: "<<salary<<endl;


    return 0;
}
