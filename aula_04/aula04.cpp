#include <iostream>

using namespace std;

// variaveis globais;
int n1, n2;

int main() {
    int n3, n4; // variaveis locais;

    cout << "insira o valor de n1" << endl;
    cin >> n1;
    cout << "insira o valor de n2" << endl;
    cin >> n2;

    // operadores matematicos: +, -, /, *, % ;
    cout << "O resultado da soma e\n" << n1 + n2 << endl;

    n3 = 4;
    n4 = 10;

    cout << ((n1 + n2) * n3) * n4 << endl;

    return 0;
}