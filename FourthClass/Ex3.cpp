#include <iostream>

using namespace std;

void adiciona(float &a, float b) {
    
    a += b; // a = a + b
    cout << "In function: " << a << endl;

};

void imprimir(string texto, int &count)
{
    count ++;
    cout << texto << count << endl;
};

int main()
{
    float x = 2.5, y = 3.78;
    adiciona(x, y);
    cout << "In main: " << x << endl;

    //Ref variable
    string text = "Test: ";
    int i = 0;
    imprimir(text, i);
    imprimir(text, i);
    imprimir(text, i);

    return 0;
}
