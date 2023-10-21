#include <iostream>
#include <vector>

using namespace std;

int calculaSoma(int num) {
    // 1. Calcular a soma dos 100 primeiros nº naturais.
    unsigned int soma = (num / 2) * (1 + num);
    return soma;
}

vector<int> calculaDivisores(int num) {
    // 2. Calcular os divisores de um nº qualquer.
    vector<int> v;

    for (int i = 1; i <= num; i++) { // Comeca de 1 para evitar divisão por zero
        if (num % i == 0) {
            v.push_back(i);
        }
    }
    return v;
}

int main() {
    // Questao 1 de exercicio1.txt
    int cem, soma;
    cem = 13;
    soma = calculaSoma(cem);
    cout << soma << endl;

    // Questao 2 de exercicio1.txt
    vector<int> div;
    div = calculaDivisores(cem);
    cout << "Divisores de " << cem << " sao: ";
    for (int i = 0; i < div.size(); i++) {
        cout << div[i] << " ";
    }
    cout << endl;

    return 0;
}