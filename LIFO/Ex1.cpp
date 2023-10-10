#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<string> pilha;

    pilha.push("A");
    pilha.push("B");
    pilha.push("C");

    do
    {
        cout << "Tamanho da pilha: " << pilha.size() << endl;
        cout << "Valor no topo da pilha: " << pilha.top() << endl;
        pilha.pop();
    } while (!pilha.empty());
    

    return 0;
}
