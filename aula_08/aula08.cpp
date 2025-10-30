#include <iostream>

using namespace std;

int main() {
    int faltas;
    float nota1, nota2, nota3;
    char opc;

    // label, o programa le ele e nao faz nada até achar um goto para ele;
    inicio:

    cout << "Insira quantas faltas você tem" << endl;
    cin >> faltas;
    cout << "Insira suas notas uma apos a outra" << endl;
    cin >> nota1 >> nota2 >> nota3;

    cout << "as notas sao: " << nota1 << " " << nota2 << " " << nota3 << endl;
    float media = (nota1 + nota2 + nota3) / 3;

    if (media >= 6 and faltas <= 100) {
        cout << "Aluno aprovado" << endl;
    } else if (media >= 4 and faltas <= 100){
        cout << "Aluno em recuperacao" << endl;
    } else if (faltas > 100) {
        cout << "Aluno reprovou por falta" << endl;
    } else {
        cout << "Aluno reprovou por nota" << endl;
    }

    cout << "Gostaria de inserir as faltas e notas de outro aluno?[ s/n ]" << endl;
    cin >> opc;

    cout << "Voce escolheu: " << opc << endl;
    if (opc == 's' or opc == 'S') {
        // comando goto direciona para um label
        goto inicio;
    }
    return 0;
}