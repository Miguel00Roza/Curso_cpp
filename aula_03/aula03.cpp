#include <iostream>;

using namespace std;

// nao usa " ; " nem o sinal de =;
#define pi 3.14

#define teste cout << "Testando" << endl;

int main() {
    // declaração multipla de variavel;
    int vidas, municao, dano;

    // posso colocar os valores de forma multipla tambem;
    string nome = "Miguel", nomeVizinho = "Paulo";

    // entrada multipla de dados;
    cin >> vidas >> municao >> dano;

    // cout das variaveis;
    cout << vidas << endl << municao << endl << dano << endl;
    cout << "O valor de pi e: " << pi << endl;

    // este " ; " de teste não é obrigatorio
    teste;
    return 0;
}