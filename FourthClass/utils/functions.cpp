#include <iostream>
#include <iomanip>

using namespace std;

int adiciona(int x, int y) {
    int t = x + y;
    return t;
}

int subtrai(int x, int y) {
    int t = x - y;
    return t;
}

int multi(int x, int y) {
    int t = x * y;
    return t;
}

int division(int x, int y) {
    int t = x / y;
    return t;
}

int fatorial(int &x) {
    int aux = 1;
    for (int i = 2; i <= x; i++) {
        aux *= i;
    }
        return aux;
}

bool primo(int num) {
    int count = 0;
    for (int i=1; i <= num; i++)
    {
        if (num%i == 0)
        {
            count++;
        } 
    }
    return count == 2;
}