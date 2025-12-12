#include <iostream>

using namespace std;

int main() {
    //write a program that return if a letter is a vowel or not
    char letter;

    cout<<"Enter the letter: ";
    cin>>letter;

    switch(letter){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        cout<<"Is a vowel."<<endl;
        break;
    default:
        cout<<"That is not a vowel."<<endl;
        break;
    }

    return 0;
}
