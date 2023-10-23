#include <iostream>
#include <stack>

using namespace std;

int main()
{
    string s;
    // s = "Dados";

    // cout << s[1]; output == 'a'

    // cin >> s; //input1 == 'Caramba turma'
    getline(cin,s); // input2 == 'Caramba turma'

    cout << s << endl; //output1 == 'Caramba' || output2 == 'Caramba turma'

    for(char c:s){
        cout << c << endl; //Percorrendo cada caractere da string
    }

    return 0;
}
