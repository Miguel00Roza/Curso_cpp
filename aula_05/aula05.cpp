#include <iostream>
using namespace std;

int main() {
    int n1;
    n1 = 10;

    // incremento pos fixado, usa o valor e depois incrementa;
    cout << n1++ << endl;
    // incremento pre fixado, incremena e depois usa o valor;
    cout << ++n1 << endl;

    return 0;
}