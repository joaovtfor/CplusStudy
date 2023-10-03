
//Nome: João Vitor de For dos Santos
//Matrícula: 198226

#include <iostream>
#include <iomanip>

using namespace std;

float media(float &value1, float &value2, int total) {
    float media = (value1 + value2) / total;
};

int main()
{
    int N;

    cout << "Digite a quantidade de alunos: ";
    cin >> N;
    int vet[N];

    cout << "Digite as notas:" << endl;

    for (int i = 0; i < N; i++) {
        cout << "Nota aluno " << i << ": ";
        cin >> vet[N];
    }
    cout << vet[N];

    // media(vet[1], vet[0], 2);

    return 0;
}
