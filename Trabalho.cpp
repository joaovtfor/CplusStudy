#include <iostream>
#include <list>
#include <vector>
#include <string>
#include <functional>
#include <cstdint>
#include <algorithm>
#include <Windows.h>
#include <sstream>


using namespace std;


struct car {
    string plate;
};


int add_car(vector<car> &vagas,string &plate) {
    if (vagas.size() >= 8) {
        // Evitar "overflow" da lista
        return 1;
    }

    vagas.push_back({plate});
    return 0;
};


vector<car> remove_car(vector<car> &vagas, int index) {
    if (index == 8) {
        vagas.pop_back();
        return {};
    }

    vector<car> manobras;

    // cout << "[DEBUG] Remover no index " << index << "\n";
    // cout << "[DEBUG] vagas.size() == " << vagas.size() << "\n";
    // cout << "[DEBUG] Remover no index " << index << "\n";

    // Loop ao contrário para preservar a ordem original.
    for (int i = vagas.size()-1; i > index; i--) {
        
        // cout << "[DEBUG] Manobrando " << vagas.at(i).plate << "\n";
        // Mover objeto  vagas -> manobras
        manobras.push_back(vagas.at(i));
        vagas.pop_back();
    }
    // Remover o carro selecionado
    vagas.pop_back();
    
    // Reverse para preservar a ordem original.
    reverse(manobras.begin(), manobras.end());
    for (int i = 0; i < manobras.size(); i++) {
        // cout << "[DEBUG] Retornando " << manobras.at(i).plate << "\n";
        vagas.push_back(manobras.at(i));
    }

    return manobras;
};

int main() {
   
    vector<car> vagas;

    // string placa = "ABC1234";
    // add_car(vagas, placa);
    // placa = "DEF5678";
    // add_car(vagas, placa);
    // placa = "HIJ1234";
    // add_car(vagas, placa);
    // placa = "DUI2837";
    // add_car(vagas, placa);
    // placa = "HDG2837";
    // add_car(vagas, placa);
    // placa = "SGA3721";
    // add_car(vagas, placa);
    // placa = "SGA3721";
    // add_car(vagas, placa);
    // placa = "SGA3721";
    // add_car(vagas, placa);



    while (true) {   
        cout << u8"Opções:" << "\n";
        cout << "1. Adicionar carro." << "\n";
        cout << "2. Remover carro." << "\n";
        cout << "3. Listar carros." << "\n";
        cout << "4. Sair." << "\n";
        
        string option;
        cout << u8"> ";
        getline(cin, option);
        
        if(option == "1") {
            option = "";

            while (true) {
                cout << "Placa > ";
                getline(cin, option);
                if (option.size() != 7) {
                    cout << u8"\n[!] Placa inválida. Utilize o modelo: ABC1234.\n\n";
                    continue;
                }
                break;
            }

            // Transforma a placa em letras maículas
            transform(option.begin(), option.end(), option.begin(), [](unsigned char c) {return toupper(c); });

            if (add_car(vagas, option) == 1) {
                cout << "[!] Estacionamento lotado!\n";
            } else {
                cout << "[!] Placa " << option << " inclusa com sucesso\n";
            };

            continue;

        } else if (option == "2") {
            if (vagas.empty()) {
                cout << u8"\nEstacionamento vazio\n";
                continue;
            }

            cout << u8"\nVagas disponíveis: \n";
            for (int i = 0; i < vagas.size(); i++) {
                cout << ' ' << i+1 << ". " << vagas.at(i).plate;
                cout << "\n";
            }

            int opt;
            while (true) {
                cout << "Vaga > ";
                getline(cin, option);
                try {
                    // Transformar o input (string) em int   
                    // stoi, s to i, string to int
                    opt = stoi(option);
                } catch (std::invalid_argument &e) {
                    cout << u8"[!] Argumento inválido, tente selecionar uma das vagas acima.\n";
                    continue;
                }

                if (opt > vagas.size() || opt < 1) {
                    cout << u8"[!] Esta vaga está vazia ou é inválida.\n\n";
                    continue;
                }
                break;
            }
            vector<car> manobrados = remove_car(vagas, opt-1);
            if (manobrados.empty()) {
                cout << "O carro foi retirado e nenhum carro foi manobrado.\n";
                continue;
            }

            for (int i = 0; i < manobrados.size(); i++) {
                cout << "[!] Manobrando " << manobrados.at(i).plate << "\n";
            }
        } else if (option == "3") {
            cout << u8"\nSituação do estacionamento: \n";
            for (int i = 0; i < 8; i++) {
                if (vagas.size() >= i+1 ) {
                    cout << ' ' << i+1 << ". " << vagas.at(i).plate;
                } else {
                    cout << ' ' << i+1 << ". " << "Vazia";
                }
                cout << "\n";
            }

        } else if (option == "4") {
            break;
        } else {
            cout << u8"\n[!] Opção inválida.\n";
        }
        cout << "\n";
        
    }
    
};