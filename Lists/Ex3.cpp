#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
    list<int> lista{10,200,41,33,200,20};

    int x;
    cin >> x;

    lista.remove_if([x](int n) {
        return n < x;
    });

    for (auto n:lista) {
        cout << n << " ";
    }

    int c = count_if(lista.begin(), lista.end(), [](int n) { //algorithm
        return n%2 == 0;
    });

    cout << endl;

    cout << "Pares: " << c << endl;

    return 0;
}
