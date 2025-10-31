#include <iostream>

using namespace std;

int main() {
    /*
    //PROBLEMA: TURNO DE ESTUDO
    Faça um script que pergunte em que turno você estuda.
    Peça para digitar M-matutino ou V-Vespertino ou N-Noturno.
    Imprima a mensagem
    - "Bom Dia!"
    - "Boa Tarde!" ou
    - "Boa Noite!" ou
    - "Valor Inválido!"
    conforme o caso.
    */

    //ENTRADA
    char turno;
    inicio:
    cout << "Em qual turno voce estuda? [ M-matutino, V-vespertino, N-noturno ]" << endl;
    cin >> turno;

    //PROCESSAMENTO

    // LEMBRAR QUE O TIPO CHAR É DECLARADO COM '' ASPAS SIMPLES NÃO "" ASPAS DUPLAS
    if (turno == 'M' or turno == 'm') {
        cout << "Bom dia!" << endl;
    } else if (turno == 'V' or turno == 'v') {
        cout << "Boa tarde!" << endl;
    } else if (turno == 'N' or turno == 'n') {
        cout << "Boa noite" << endl;
    } else {
        cout << "Invalido, insira de novo" << endl;
        goto inicio;
    }

    //SAÍDA

return 0;
}