#include <iostream>
#include "utils/functions.cpp"

using namespace std;

int main()
{
    int x = 20, y = 10;
    int sum = adiciona(x,y);
    int sub = subtrai(x,y);
    int mult = multi(x,y);
    int div = division(x,y);

    cout << " Sum: " << sum << endl << " Sub: " << sub << endl << " Multi: " << mult << endl << " Div: " << div << endl;
    cout << "USING A EXTERNAL FUNCTION" << endl;

    return 0;
}
