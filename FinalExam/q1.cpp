// Nome: João Vitor de For dos Santos
// Matrícula: 198226

#include <iostream>
#include <list>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;

struct aluno {
    string nome;
    int nivel;
    string cor;
    string tamanho;
};

int add_aluno(list<aluno> &aluno,string &nome, int &nivel, string &cor, string &tamanho) {
    aluno.push_back({nome, nivel, cor, tamanho});
    return 0;
};

bool ordenar(const aluno &d1, const aluno &d2){
    return
        (d1.nivel < d2.nivel) ||
        (d1.nivel == d2.nivel && d1.cor < d2.cor) || 
        (d1.nivel == d2.nivel && d1.cor == d2.cor && d1.tamanho > d2.tamanho) ||
        (d1.nivel == d2.nivel && d1.cor == d2.cor && d1.tamanho == d2.tamanho && d1.nome < d2.nome);
}

int main() {
   int N, nivel;
   string nome, cor, tamanho;
   list<aluno> alunos;

   cin >> N;

   for(int i = 0; i < N; i++){ 
    cin >> nome >> nivel >> cor >> tamanho;
    add_aluno(alunos, nome, nivel, cor, tamanho);
   }

   alunos.sort(ordenar);

   cout << "Lista de Interessados em Moletons:" << endl;

   for (auto aluno:alunos) {
    cout << "Nome: " << aluno.nome << ", Turma: " << aluno.nivel << ", Logo: " << aluno.cor << ", Tamanho: " << aluno.tamanho << endl;
   }

    return 0;
};
