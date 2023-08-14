#include <iostream>

using namespace std;

int main()
{
    int n;
    int i;

    for (i == 0; i < 5; i++) {
        cout << "Digite um número inteiro: ";
        cin >> n;
        if (n < 0) {
            cout << "Número menor que zero" << endl;
            continue;
        } else if (n == 0) {
            cout << "Igual a zero" << endl;
            continue;
        } else if (n > 0) {
            cout << "Maior que zero" << endl;
            continue;
        } else {
            cout << "Número inválido" << endl;
            continue;
        }
    }

    return 0;
}
