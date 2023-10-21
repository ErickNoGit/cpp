#include <iostream>
#include <vector>
#include <cmath>

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

int calcularFatorial(int n) {
    // 3. Calcular o fatorial de um número qualquer.
    unsigned int j = 1;

    for (int i = 1; i <= n; i++) { // i sofrerá um incremento
        j *= i; // J deve ser 1 para iniciar e ele mesmo deve armazenar a multiplicação
    }
    return j; // Retorna J que está no fim do laço
}

int lowerPositivo(double l){
    // 4. Imprimir o menor inteiro positivo x cujo quadrado é superior a um valor L dado.
    int x = ceil(sqrt(l)) + 1;
    return x;
}

void tabuada(int n) {
    // 5. Imprimir a tabuada de qualquer número n.
    int res;
    cout << "----TABUADA----" << endl;
    cout << "---------------" << endl;
    cout << "|             |" << endl;
    for (int i = 1; i <= 10; i++) {
        res = n * i;
        if (res < 10) {
            cout << "| 0" << i << " x " << n << " = 0" << res << " |" << endl;    
        } else if (res < 10 || i < 10){
            cout << "| 0" << i << " x " << n << " = " << res << " |" << endl;
        } else {
            cout << "| " << i << " x " << n << " = " << res << " |" << endl;
        }
        
    }
    cout << "|             |" << endl;
    cout << "---------------" << endl;
}

void lerNumero(int n) {
    // 6. Ler um número e escreva se ele "é primo" ou "não é primo".
    vector<int> v;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            v.push_back(i);
        }
    }

    if (v.size() == 2) {
        cout << "O número é primo!" << endl;
    } else {
        cout << "O número não é primo!" << endl;
    }
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
    
    // Questão 3 de exercicio1.txt
    int numero = 4;
    int rfatorial = calcularFatorial(numero);
    cout << "O fatorial de " << numero << " é " << rfatorial << endl;

    // Questão 4 de exercicio1.txt
    int x = lowerPositivo(25);
    cout << "Menor inteiro positivo é: "<< x << endl;

    // Questão 5 de exercicio1.txt
    tabuada(4);

    // Questão 5 de exercicio1.txt
    lerNumero(70);

    return 0;
}