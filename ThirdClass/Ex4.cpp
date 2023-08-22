#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    float vet[]{ 10.0, 3.01, 5.03, 7.7, 15.3 };
    float soma = 0;

    cout << "A " << sizeof(vet)/sizeof(int);

    for (int i = 0; i < sizeof(vet)/sizeof(int); i++) {
        soma = soma + vet[i];

    }
    cout << " B " << fixed << setprecision(1) << soma << endl;

    return 0;
}
