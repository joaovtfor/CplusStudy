// Nome: João Vitor de For dos Santos
// Matrícula: 198226

#include <iostream>
#include <list>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    list<int> numbers, pares, impares;
    int N, countI = 0, countP = 0;

    while (cin >> N && N != 0) {
        if (N%2 != 0) {
            impares.push_back(N);
        } else {
            pares.push_back(N);
        }
    }

    pares.sort([](int a, int b) {
        return a > b;
    });

    impares.sort([](int a, int b) {
        return a < b;
    });

    cout << "Tamanho do container de pares: " << pares.size() << endl;

    cout << "Tamanho do container de impares: " << impares.size() << endl;

    cout << "Valores pares em ordem descendente: ";

    for (int num : pares) {
        countP = countP + num;
        cout << num << " " ;
    }

    cout << endl;

    cout << "Valores impares em ordem crescente: ";

    for (int num : impares) {
        countI = countI + num;
        cout << num << " " ;
    }

    cout << endl;

    cout << "Soma dos valores impares: " << countI << endl;

    cout << "Soma dos valores pares: " << countP << endl;
    
    return 0;
}