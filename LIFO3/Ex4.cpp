#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int *p = &a;
    cout << p << " " << *p << endl;

    int **pp; //Declarando um ponteiro para ponteiro 'pp'
    pp = &p;

    cout << pp << " " //imprime endereço de p por meio do ponteiro pp
         << *pp << " "  //imprime o valor apontado por pp que é o endereço a (valor de p)
         << **pp << endl; //imprime o valor apontado duas vezes por pp, que é o valor de a

    return 0;
}
