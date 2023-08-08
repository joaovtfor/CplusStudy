#include <iostream>
#include <iomanip>

//iomanip lib for decimals

using namespace std;

int main()
{
    float a, b;

    cin >> a >> b;
    cout << "O resultado é: " 
    << fixed
    << setprecision(2)
    << a/b
    << endl;
    
    return 0;
}
