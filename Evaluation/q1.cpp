//Nome: João Vitor de For dos Santos
//Matrícula: 198226

#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

struct times{
    string E;
    int N, P, V, GF, GS;

    int saldo = GS - GS;

    // void list(N) {
    //     for (int i = 0; i < N; i++) {
    //         cout << i + 1 << " Equipe:" << endl;
    //         cout << "Nome: ";
    //         cin >> E;
    //         cout << "Pontos: ";
    //         cin >> P;
    //         cout << "Vitórias: ";
    //         cin >> V;
    //         cout << "Gols Feitos: ";
    //         cin >> GF;
    //         cout << "Gols Sofridos: ";
    //         cin >> GS;
    //     }
    // }

    void imprimir () {
        cout << P << V << GF << GS;
    }
};

bool ordenar(const times &firstValue, const times &secondValue){
    return
        (firstValue.P < secondValue.P) ||
        (firstValue.P == secondValue.P && firstValue.V < secondValue.V) || 
        (firstValue.P == secondValue.P && firstValue.V == secondValue.V && firstValue.saldo < secondValue.saldo);
}

int main()
{
    int N, P, V, GS, GF; //qtd equipes

    string E;


    cout << "Digite a quantidade de equipes: ";
    cin >> N; 


    string reponse;

    for (int i = 0; i < N; i++) {
        cout << i + 1 << " Equipe:" << endl;
        cout << "Nome: ";
        cin >> E;
        cout << "Pontos: ";
        cin >> P;
        cout << "Vitorias: ";
        cin >> V;
        cout << "Gols Feitos: ";
        cin >> GF;
        cout << "Gols Sofridos: ";
        cin >> GS;

        cout << E << ' ' << P << ' ' << V << ' ' << GF << ' ' << GS << ' ' << endl; 
        
        times times[N]{
            {E, P, V, GF, GS},
        };
    };

        // cout << times[N] << endl;
    // sort(times,times + N, ordenar);



    return 0;
}
