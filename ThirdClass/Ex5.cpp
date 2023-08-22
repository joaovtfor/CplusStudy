#include <iostream>

using namespace std;

int main() {
    
    // Matriz = M[index linha][index coluna]
    int i = 2, j = 2;

    float M[i][j] {
        { 1, 2 },
        { 1, 2 }
    };

    for ( int m = 0; m < i; m++) {
        cout << endl;
        for(int n = 0; n < j; n++) {
            cout << "a(" << m + 1 << n + 1 << ") = " << M[m][n] << endl;
        }
    }

    return 0;
}
