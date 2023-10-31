//Testa alocação dinâmica em Em tempo real
//size() != capaticy()
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<double> V;

    cout << "Insira valores [0 para sair]\n";
    double x;

    cout << "Tamanho: " << V.size()
         << " Capacidade: " << V.capacity() << endl;

         while( cin >> x && x != 0) {

            V.push_back(x);

            cout << "Tamanho: " << V.size()
                 << " Capacidade: " << V.capacity() << endl;
            // switch (x)
            // {
            // case 0:
            //     break;
            // case 1:

            // default:
            //     break;
            // }
         }

    return 0;
}
