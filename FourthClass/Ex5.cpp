#include <iostream>
#include "utils/functions.cpp"
#include <cassert>

using namespace std;

int main()
{
    int x = 5;
    int factorial = fatorial(x);

    cout << " Fatorial: " << factorial << endl;
    assert(fatorial(x) == 120);

    assert(primo(x) == true);
    assert(primo(x + 1) == true);

    return 0;
}
