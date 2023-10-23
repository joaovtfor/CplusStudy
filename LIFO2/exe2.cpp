//Implementação de fila com struct
#include <iostream>
#include <queue>

using namespace std;

struct pessoa{
    string nome;
    string email;
};

int main(){
    queue<pessoa> fila;
    pessoa aux;

    while(true){
        cout << "Digite FIM para sair: ";
        getline(cin,aux.nome);
        if(aux.nome =="FIM"){
            break;
        }
        cout << "E-mail: ";
        getline(cin,aux.email);
        fila.push(aux);
    }

    while(!fila.empty()){ // Enquanto ela não estiver vazia
        cout << fila.front().nome
             << " "
             << fila.front().email
             << endl;
        fila.pop();
    }
    return 0;
}


