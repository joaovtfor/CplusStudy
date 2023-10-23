//First example
#include <iostream>

using namespace std;

int main()
{
    int a = 20; //var int a
    int *p; //pointer p for INT

    p = &a; //p recieves a address

    cout << p << endl; //memory address
    cout << *p << endl; // value pointed by p

    int b = *p / 2;

    cout << b << endl;

    return 0;
}
