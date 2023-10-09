#include <iostream>
#include <algorithm>

using namespace std;

struct equipe{
    string E;
    int P,V,GF,GS,SG;
};

bool cmp(const equipe &e1, const equipe &e2){
    return (e1.P > e2.P) ||
           (e1.P == e2.P) && (e1.V > e2.V) ||
           (e1.P == e2.P) && (e1.V == e2.V) && (e1.SG > e2.SG) ||
           (e1.P == e2.P) && (e1.V == e2.V) && (e1.SG == e2.SG) && (e1.E < e2.E); //Ordenação por nome inverte
           
}

int main()
{
    int N;
    cout << "Digite a quantidade de times: ";
    cin >> N;

    equipe campeonato[N];

    for (int i = 0; i < N; i++) {
        cin >> campeonato[i].E >> campeonato[i].P >> campeonato[i].V >> campeonato[i].GF >> campeonato[i].GS;
        campeonato[i].SG = campeonato[i].GF - campeonato[i].GS;
    }

    sort(campeonato, campeonato + N, cmp);

    for (int i = 0; i < N; i++){
        cout << campeonato[i].P << " " << campeonato[i].E << endl;
    }

    return 0;
}
