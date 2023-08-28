#include <iostream>

using namespace std;

int main()
{
    int m[3][3]{
        {1, 2, 3},
        {10, 20, 30},
        {11, 22, 33},
    };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                cout << m[i][j] << endl;
            }
        }
    };

    //or

    for (int k = 0; k < 3; k++) {
        cout << m[k][k] << endl;
    };

    return 0;
}
