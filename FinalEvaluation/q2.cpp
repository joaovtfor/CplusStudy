// Nome: João Vitor de For dos Santos
// Matricula: 198226

#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
    list<int> valores;
    int valor;

    do {
       cin >> valor;

       auto aux = valores;
       aux.sort([](int a, int b) {
           return a > b;
           });
        auto inicio = aux.begin();

       if( valor != 0) { 
        if (valores.size() == 0 || valor > *inicio) {
            valores.push_back(valor);
        } else if ( valor <= *inicio) {
             valores.pop_back();
             valor = valor + *inicio;
             valores.push_back(valor);
        }

       }
    } while ( valor != 0 );
    
    cout << "Fim com tamanho da fila = " << valores.size() << endl;

    return 0;
}
