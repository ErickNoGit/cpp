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

void seqFibonacci(int n) {
    // 7. A série de Fibonacci é uma seqüência de termos que tem como os 2 primeiros termos,
    // respectivamente, os números 0 e 1. A partir daí, os demais termos são formados seguindo uma
    // certa regra. A série de Fibonacci pode ser vista a seguir:
    // 0 1 1 2 3 5 8 13 21...
    // Descubra a regra que gera a seqüência da série de Fibonacci e escreva um algoritmo que gere
    // os n (solicitados pelo usuário) primeiros termos desta série e calcula e escreve a soma destes
    // termos.

    cout << "O número digitado foi " << n << endl;
    vector<int> v;
    unsigned int j = 1;

    for (int i = 0; i < n; i++) {
        // adiciona 0 e 1 depois os demais
        if (v.size() == 0) {
            v.push_back(i);
        } else if (v.size() == 1) {
            v.push_back(i);
            v.push_back(i);
        } else {
            unsigned int soma = v[i] + v[j];
            v.push_back(soma);
            j++;
        }
    }

    cout << "Sequencia de Fibonacci :" << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

void gerarNum() {
    // 8. Gerar 20 números de 1000 a 1999 e escrever aqueles que divididos por 11 dão um resto igual a 5.
    int contador = 1;

    cout << "Os 20 primeiros numeros de resto 5 entre 1000 a 1999 :" << endl;
    for (int i = 1000; i <= 1999; i++) {
        if (contador <= 20) {
            if (i % 11 == 5) {
                cout << i << " ";
                contador++;
            }
        }
    }
    cout << endl;
}

void imprimirASC() {
    // 9. Imprima a tabela ASCII (letra e código decimal correspondente).

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

    // Questão 6 de exercicio1.txt
    lerNumero(70);

    // Questão 7 de exercicio1.txt
    seqFibonacci(30);

    // Questão 8 de exercicio1.txt
    gerarNum();

    return 0;
}