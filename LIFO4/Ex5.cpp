#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cout << "Selecione o tamanho do vetor: ";
    int n;
    cin >> n;
    vector<string> V(n);

    cout << "Selecione os valores:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> V[i];
        cout << "Tamanho: " << V.size()
             << " Capacidade: " << V.capacity() << endl;
    }

    cout << "Elementos:\n";
    for (auto n:V) {
        cout << n << endl;
    }

    return 0;
}
