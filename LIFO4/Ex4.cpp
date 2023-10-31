#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<string> V;
    V.push_back("A");
    V.push_back("B");
    V.push_back("C");
    V.push_back("D");
    V.push_back("E");

    for (auto n:V) {
        cout << n << endl;
    }
    
    auto it = find(V.begin(), V.end(), "D"); //find is from algorithm

    if (it == V.end()) {
        cout << "Não encontrado" << endl;
    } else {
        V.insert(it, "Z");
    }

    for (auto n:V) {
        cout << n << endl;
    }

    return 0;
}
