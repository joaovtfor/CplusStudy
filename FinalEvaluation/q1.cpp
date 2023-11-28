// Nome: João Vitor de For dos Santos
// Matricula: 198226

#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
    list<string> compras;
    string item;

do {
    getline(cin, item);
    if(item != "FIM" && find(compras.begin(), compras.end(), item) == compras.end()) {
        compras.push_back(item);
    }
}
while ( item != "FIM");

cout << "Compras: ";
     for(auto n: compras){
        cout << n << " ";
    }

    return 0;
}
