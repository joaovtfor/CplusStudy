#include <iostream>
#include <vector>
#include <algorithm>

class Carro {
public:
    Carro(const std::string& placa) : placa(placa) {}

    std::string getPlaca() const {
        return placa;
    }

private:
    std::string placa;
};

class Estacionamento {
public:
    Estacionamento(int capacidade) : capacidade(capacidade) {}

    void registrarEntrada(const Carro& carro) {
        if (carros.size() < capacidade) {
            carros.push_back(carro);
            std::cout << "Carro com placa " << carro.getPlaca() << " estacionado.\n";
        } else {
            std::cout << "Não há vagas no estacionamento.\n";
        }
    }

    void registrarSaida(const std::string& placa) {
        if (carros.empty()) {
            std::cout << "Estacionamento Vazio.\n";
            return;
        }

        auto it = std::find_if(carros.begin(), carros.end(),
          [&placa](const Carro& carro) {
              return carro.getPlaca() == placa;
          });

        if (it != carros.end()) {
            carros.erase(it);

            std::cout << "Carro com placa " << placa << " retirado do estacionamento.\n";
        } else {
            std::cout << "Carro com placa " << placa << " não encontrado no estacionamento.\n";
        }
    }

    void consultarVaga() const {
        std::cout << "Número de carros estacionados: " << carros.size() << "\n";
        std::cout << "Número de vagas restantes: " << capacidade - carros.size() << "\n";
    }

private:
    int capacidade;
    std::vector<Carro> carros;
};

int main() {
    Estacionamento cppPark(8);

    cppPark.registrarEntrada(Carro("ABC1234"));
    cppPark.registrarEntrada(Carro("XYZ5678"));
    cppPark.registrarEntrada(Carro("DEF9876"));

    cppPark.consultarVaga();

    cppPark.registrarSaida("XYZ5678");

    cppPark.consultarVaga();

    return 0;
}
