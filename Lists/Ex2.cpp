#include <iostream>
#include <list>
#include <iterator>

using namespace std;

int main()
{
    list<int> lista{10,200,41,33,200,20};

    lista.sort([](int a, int b) {
        return a > b;
        });

    for (auto n:lista) {
        cout << n << " ";
    }

    cout << endl;

    //lista.remove(200); //remove toda a ocorrência, ou seja, removeria ambos 200 da lista

    lista.remove_if([](auto n) {
        return n%2 != 0;
        });

    for (auto n:lista) {
        cout << n << " ";
    }

    return 0;
}
