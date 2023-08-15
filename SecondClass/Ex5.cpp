#include <iostream>

using namespace std;

int main()
{
    int n = 0;

    cout << "Início do 'While'" << endl;

    while (n < 6) {
        cout << n << endl;
        n++;
    }

    cout << "Fim do 'While'" << endl;
    cout << "Início do 'Do While'" << endl;

    do {
        cout << n << endl;
        n++;
    } while (n < 11);

    cout << "Fim do 'Do While'" << endl; 
    cout << "Início do 'For'" << endl;

    int i = 0;

    for ( i == 0; i < 6; i++ ) {
        cout << i << endl;
    }
    
    cout << "Fim do 'For'" << endl;

    return 0;
}
