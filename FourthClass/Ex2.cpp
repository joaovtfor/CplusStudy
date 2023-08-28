#include <iostream>

using namespace std;

void imprimir(string texto, int count)
{
    cout << texto << count << endl;
}

int adiciona(int x, int y)
{
    int t = x + y;
    return t;
}

int main()
{
    int x = 10, y = 2, i = 0, t = 500;
    for (i = 0; i < 5; i++)
    {
        imprimir("Function ", i);
    }

    int sum = adiciona(x, y);
    cout << "Sum: " << sum << endl;

    cout << "Valor do T: " << t << endl;

    return 0;
}