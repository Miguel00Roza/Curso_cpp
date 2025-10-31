#include <iostream>

using namespace std;

int main() {
    int nota1, nota2, nota3, media;

    cout << "digite as notas" << endl;
    cin >> nota1 >> nota2 >> nota3;

    media = (nota1 + nota2 + nota3) / 3;
    string situacao = (media >= 6) ? "Aprovado" : (media >= 4) ? " em Recuperacao" : "Reprovado";

    cout << "O aluno esta " << situacao << endl;
    return 0;
}