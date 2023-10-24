#include <iostream>

using namespace std;

int main()
{
    int v[3] = {10, 20, 30};

    cout << v << endl;

    int *p;
    p = v; //é o mesmo que: p = &v[0]

    cout << p << " " << *p << endl; // v[0]
    
    p++;

    cout << p << " " << *p << endl; //v[1]

    return 0;
}
