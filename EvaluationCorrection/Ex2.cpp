#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

bool cmp (const float &a1, const float &a2) {
    return (a1 < a2);
}

float media (float vet[], int &tamanho) {
    int soma, media = 0;

    for(int i = 0; i < tamanho; i++) {
        soma = soma + vet[i];
    }
    return media = soma/tamanho;
}

int main()
{
    int N;
    cout << "Digite o tamanho da turma: ";
    cin >> N;

    float turma[N];
    int reprovados, exames, aprovados = 0;

    for (int i = 0; i < N; i++) {
        cin >> turma[i];
    }

    for(int i = 0; i < N; i++) {
        if(turma[i] < 3.0) {
            reprovados++;
        } else if(turma[i] < 7.0) {
            exames++;
        } else {
            aprovados++;
        }
    }

    sort(turma, turma + N);

    float mediaTurma = media(turma, N);

    cout << "Alunos reprovados: " << reprovados << endl;
    cout << "Alunos em exame: " << exames << endl;
    cout << "Alunos aprovados: " << aprovados << endl;
    cout << "Maior nota: " << turma[N - 1] << endl;
    cout << "Menor nota: " << turma[0] << endl;
    cout << "Media: " << fixed << setprecision(1) << mediaTurma << endl;

    return 0;
}
