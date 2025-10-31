#include <iostream>

using namespace std;

int main() {
    /*
    //PROBLEMA: TROCAR VARIÁVEIS
    Faça um script que pede dois inteiros e armazene eles em duas variáveis.
    Em seguida, troque o valor das variáveis, invertendo e exibindo o antes e o depois em uma janela de alert.
    */

    //ENTRADA
    int num1, num2;
    cout << "Insira o valor das variaveis" << endl;
    cin >> num1 >> num2;

    //PROCESSAMENTO
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;

    //SAÍDA
    cout << "O valor das variaveis invertida e num1 = " << num1 << " e num2 = " << num2 << endl;

    return 0;
}