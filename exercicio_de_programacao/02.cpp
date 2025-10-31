#include <iostream>

using namespace std;

int main() {
    /*
    PROBLEMA: ORDEM DECRESCENTE
    Faça um script que leia três números e mostre-os em ordem decrescente.
    */

    //ENTRADA
    int num1, num2, num3;
    cout << "Insira o valor dos numeros" << endl;
    cin >> num1 >> num2 >> num3;

    //PROCESSAMENTO E SAIDA
    if (num1 >= num2 and num1 >= num3) {
        cout << num1 << " ";
        if (num2 >= num3) {
            cout << num2 << " ";
            cout << num3 << endl;
        } else {
            cout << num3 << " ";
            cout << num2 << endl;
        }
    } else if (num2 >= num1 and num2 >= num3) {
        cout << num2 << " ";
        if (num1 >= num3) {
            cout << num1 << " ";
            cout << num3 << endl;
        } else {
            cout << num3 << " ";
            cout << num1 << endl;
        }
    } else {
        cout << num3 << " ";
        if (num1 >= num2) {
            cout << num1 << " ";
            cout << num2 << endl;
        } else {
            cout << num2 << " ";
            cout << num1 << endl;
        }
    }

    return 0;
}