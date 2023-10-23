#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int *p = &a;
    cout << p << " " << *p << endl;

    int **pp; //Declarando um ponteiro para ponteiro 'pp'
    pp = &p;

    cout << pp << " " 
         << *pp << " " 
         << **pp << endl;

    return 0;
}
