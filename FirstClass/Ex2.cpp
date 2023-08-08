#include <iostream>
#include <cstring>

//cstring lib for null input spaces

using namespace std;

int main()
{
    string nome;
    cout << "Digite o seu nome: ";
    getline(cin, nome);
    cout << "Menu nome é " << nome << endl;
    return 0;
}
