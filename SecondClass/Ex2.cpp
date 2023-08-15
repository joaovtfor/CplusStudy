#include <iostream>

using namespace std;

int main()
{
    int n;
    int i;

    for (i == 0; i < 5; i++) {
        cout << "Informe um número inteiro: ";
        cin >> n;

        if (n == 10 || n == 20) {
            cout << "Correto" << endl;
            continue;
        } else {
            cout << "Errado" << endl;
            continue;
        }
    }

    return 0;
}
