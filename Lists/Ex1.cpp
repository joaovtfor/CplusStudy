#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> lista;

    lista.push_front(100);
    lista.push_back(200);
    lista.push_front(300);
    lista.push_back(400);

    cout << "Tamanho: " << lista.size() << endl;

    for(auto n:lista) {
        cout << n << " - ";
    }

    cout << endl;

    //ordem reversa

    for (auto it = lista.rbegin(); it != lista.rend(); it++) {
        cout << *it << " - ";
    }

    cout << endl;

    auto it = lista.begin();
    advance(it, 2);
    cout << *it << endl;

    return 0;
}
