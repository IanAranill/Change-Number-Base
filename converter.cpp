#include <iostream>

using namespace std;

int main()
{
    int input=0;
    string Num = "";
    int Base=0;
    string NewNum ="";
    string alphabet = "01234567890ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz=+";

    cout << "Welcome to the convertion terminal\n\n"
        "Here you can change the base of your positive integer from decimal to whatever you want\n"
        "Type the number"<< endl;
    cin >> input;

    if (input < 0){
        cerr << "incorrect number, try again"<<endl;
        return 0;
    }

    cout << "Type the new base of the number, from a minimum of 1 to a maximum of 64"<< endl;
    cin >> Base;

    if (Base < 1 || Base > 64){
        cerr << "incorrect base, try again"<<endl;
        return 0;
    }

    do {    
        Num += alphabet[input % Base];
        input = Base == 1 ? input-1 : input / Base;
    }
    while( input!=0);

    NewNum = string( Num.rbegin(), Num.rend());
    cout << "the new based number is:\n"<< NewNum << endl;
    return 0;

}