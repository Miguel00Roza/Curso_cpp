#include <iostream>

using namespace std;

int main() {

    //tipo e nome = valor;

    int vidas = 3; // 3

    // LEMBRAR QUE O TIPO CHAR É DECLARADO COM '' ASPAS SIMPLES NÃO "" ASPAS DUPLAS
    char letra = 'M'; // 'B';

    double decimal = 2.23; //precisao maior: 2,499999...;
    float decimal2 = 2.32; //precisão menor: 2,5;
    bool vivo = true; // true or false;
    string nome = "Miguel"; // "Miguel"

    cout << "Digite o numero de vidas" << endl;
    cin >> vidas;

    cout << vidas << endl;
    cout << letra << endl;
    cout << decimal << endl;
    cout << decimal2 << endl;
    cout << vivo << endl;
    cout << nome << endl;

    return 0;
}