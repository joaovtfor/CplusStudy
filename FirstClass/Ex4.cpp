#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double raio, area;

    cout << "Informe o raio do circulo: ";
    cin >> raio;

    area = M_PI * pow(raio, 2);

    cout << "Area: " << area << endl;
    return 0;
}
