#include <iostream>

using namespace std;

int main()
{
    int i;
    double a,b;

    for (i == 0; i < 5; i++) {
        cout << "Digite um valor: ";
        cin >> a;
        cin >> b;
        
        double m = ( a > b ? a : b);

        cout << "Maior: " << m << endl;
    }

    return 0;
}
