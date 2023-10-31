//std::vector
//Um container sequencial para vetores dinamicos ou Array List
//O tamanho do vetor pode crescer dinamicamente e não precisamos prever o tamanho em tempo de compilação
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> V; //vector de int inicialmente vazio
    cout << "Tamanho: " << V.size() << endl;

    V.push_back(10); // Inserção no final do vetor
    V.push_back(20);
    V.push_back(5);

    cout << "Tamanho: " << V.size() << endl;

    for (int i = 0; i < V.size(); i++) {
        cout << i << ": " << V[i] << endl;
    }

    V.pop_back();

    cout << "Tamanho: " << V.size() << endl;

    for (int i = 0; i < V.size(); i++) {
        cout << i << ": " << V[i] << endl;
    }
    return 0;
}
