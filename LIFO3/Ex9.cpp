//Alocamos um espaço de memória aonde o ponteiro irá apontar
#include <iostream>

using namespace std;

int main()
{
   int *p = new int; //Declara o ponteiro apontando para um endereço na memória
   *p = 0;

   cout << *p << " " << p << endl; //Única forma de exibir o valor do endereço
   delete p;

   int a = 5;
   p = &a; //Perda do endereço e do valor desse endereço;

   cout << *p << " " << p << endl;

    return 0;
}
