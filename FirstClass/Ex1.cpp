#include <iostream>

using namespace std;

int main() 
{
    int i;
    int idade;
    float altura;

    for ( i = 0; i < 4; i++)
    {
        cout << "Digite a sua idade: ";
        cin >> idade;
        cout << "Digite a sua altura: ";
        cin >> altura;
        if (idade < 10) {
            cout << "Tens " << idade << (idade > 1 ? " anos" : " ano") << endl;
            cout << "Você não tem idade suficiente" << endl;
        } else if (idade < 0) {
            cout << "Você deve digitar uma idade maior que zero" << endl;
            break;
        } else {
            cout << "Tens " << idade << (idade > 1 ? " anos" : " ano") << endl;
            cout << "Você tem idade suficiente" << endl;
        }

        if (altura == 1.7) {
            cout << "Sua altura é: " << altura << endl;
            cout << "Você tem estatura média" << endl;
        } else if (altura < 1.70){
            cout << "Sua altura é: " << altura << endl;
            cout << "Você é mais baixo que a média" << endl;
        } else if (altura < 0) {
            cout << "Sua altura deve ser positiva" << endl;
            break;
        } else {
            cout << "Sua altura é: " << altura << endl;
            cout << "Você é mais alto que a média" << endl;
        }
    }
    return 0;
}