// -> projetado para acessar diretamente os membros da estrutura referenciada pelo ponteiro

// -> desreferencia automaticamente o ponteiro e acessa o membro da estrutura
// C++ entende automaticamente isso

#include <iostream>

using namespace std;

struct aluno {
    int matricula;
    string nome;
};

int main()
{
    aluno eu = {909090, "Fulano"};
    aluno *p = &eu;  

    cout << eu.matricula << endl; //Acesso direto
    cout << p->matricula << endl; //Acesso indireto, via ponteiro

    p->matricula = 101010;

    cout << eu.matricula << endl;

    return 0;
}
