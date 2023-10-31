#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> V;
    V.push_back("A");
    V.push_back("B");
    V.push_back("C");
    V.push_back("D");
    V.push_back("E");

    cout << "Precorre usando 'old school' for\n";
    for(int i = 0; i < V.size(); i++) {
        cout << V[i] << endl;
    } 

    cout << "Percorre usando o range for\n";
    for (auto n:V) {
        cout << n << endl;
    }

    cout << "Percorre usando iterator\n";
    for (auto it = V.begin(); it != V.end(); ++it) {
        cout << *it << endl; //V.begin() == Endereço de memória de início e V.end() == de fim
    }

    //NOTA: end() NÃO RETORNA O ENDEREÇO DO ÚLTIMO ELEMENTO

    cout << "Percorre usando o reverse iterator\n";
    // for (int i = V.size() - 1; i >= 0; i--) {
    //     cout << V[i] << endl;
    // } //OLD

    for (auto it = V.rbegin(); it != V.rend(); ++it) {
        cout << *it << endl;
    }

    return 0;
}
