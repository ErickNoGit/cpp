#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // Manipulando e criando vetores
    int vet[1]; // vetor de inteiros, vazio, com 1 bloco disponivel

    // Acessando valor do vetor
    cout << "Valor do vetor: " << vet[0] << endl;
    cout << "Não é zero por que ele imprime um valor aleatório da memória!" << endl;

    cout << endl;

    // adicionando valor
    vet[0] = 5;
    cout << "O vetor recebeu na posição zero o valor: " << vet[0] << endl;

    vet[0] = 2;
    cout << "Agora tiramos o 5 da posição zero e colocamos o valor: " << vet[0] << endl;

    cout << endl;

    // O tamanho do vetor não pode ser alterado e ele é acessado por indice
    float vet1[5] = {1.3, 2.2, -4.0, .05, 3.1};
 
    // Vamos acessar o quarto valor, então é 4 - 1 que é 3
    float quartoValor = vet1[3];
    cout << "O quarto valor do vetor um é: " << quartoValor << endl;

    // Alterando o valor da quarta posição
    vet1[3] = 3;
    cout << "O quarto valor agora é: " << vet1[3] <<  endl;

    // Vetores do tipo float ou double aceitam inteiros, mas inteiros não aceitam floats ou doublues
    // vamos comparar
    if (vet1[3] == 3.0) {
        cout << "SIM, o valor : " << vet1[3] << " de vet1[3] é igual ao float 3.0" << endl; // True
    } else {
        cout << "NÃO, valor : " << vet1[3] << " de vet1[3] é diferente do float 3.0" << endl;
    }

    cout << endl;

    // Para usar valores de vetores de n-tamnhos usa-se a biblioteca vector de std::vector
    // Vetor de tamnho especial
    std::vector<string> vetorStrings; // n-tamnho
    // vetorStrings[0] = "João"; // Não dá erro mas da falha na segmentação
    // vetorStrings[1] = "Maria"; // Não dá erro mas da falha na segmentação

    // Mostrando posições
    // int j = 0;
    // for (string i: vetorStrings) {
    //    cout << "Posição " << j << "Nome : " << i << endl; // Error : Falha de segmentação (imagem do núcleo gravada)
    //    ++j;
    // }

    // Acessando manualmente
    // cout << "Posição zero: " << vetorStrings[0] << endl;
    // cout << "Posição um: " << vetorStrings[1] << endl;
    // cout << "Posição dois: " << vetorStrings[2] << endl;
    // cout << "Posição três: " << vetorStrings[3] << endl;
    // cout << "Posição quantro: " << vetorStrings[4] << endl;
    // Error : Falha de segmentação (imagem do núcleo gravada)

    // Error : Falha de segmentação (imagem do núcleo gravada)
    // cout << "Posição zero: " << vetorStrings[0] << endl;
    // cout << "Posição Um: " << vetorStrings[1] << endl;

    // Vamos tentar um valor fixo de strings
    vetorStrings = {"João", "Maria", "Santos", "Henrique"};

    cout << "Tentando acessar o primeiro nome que é: " << vetorStrings[0] << endl;

    // Acessando todos com laço for
    int j = 0;
    for (string i : vetorStrings) {
        cout << "Posição " << j << ", Nome: " << i << endl;
        ++j;
    }
    cout << endl;

    // Tentando trocar um nome
    vetorStrings[2] = "Lucas";
    cout << "A posição 2 com nome Santos foi trocado para: " << vetorStrings[2] << endl;

    // Imprimindo todos
    j = 0;
    for (string i : vetorStrings) {
        cout << "Posição " << j << ", Nome: " << i << endl;
        ++j;
    }
    cout << endl;

    // Vamos aplicar aritmética em vetores
    int vetorUm[5] = {6, 5, 4, 3, 2}, vetorDois[5] = {2, 3, 4, 5, 6};
    // vector<int> = vetorUm * vetorDois; // Error : expressão deve ser do tipo aritmético ou de enumeração sem escopo 
    int vetorRes[5];
    for (int i = 0; i < 5; ++i) {
        vetorRes[i] = vetorUm[i] + vetorDois[i]; // acessa o endereço 0, recolhe o valor, opera e armazena
        cout << "Soma na posição " << i << ", " << vetorUm[i] << " + " << vetorDois[i] << " = " << vetorRes[i] << endl;
    }
    cout << endl;

    // Se eu tentar acessar um valor acima do vetor
    int x = vetorRes[5];
    cout << "Valor de x: " << x << endl; // tentou acessar um número sem propósito


    int y = vetorRes[4];
    cout << "Valor de y: " << y << endl; // indice 4 valor 8
    
    cout << endl;

    // Tentando colocar tipos de dados diferentes en vetores
    int vetor3[7] = {1, 2, 3, 4, 5, 6};

    // Colocando caracter
    vetor3[0] = 'A';

    // Mostrando cada valor do vetor
    for (int i = 0; i < 6; ++i) {
        cout << "Valor da posicão " << i << ", : " << vetor3[i] << endl;
    } // A posição 0 receberá o inteiro 65 ao invẽs do caracter 'A'

    // Tentando colocar string (cadeia de caracter)
    string nome = "Alves";
    // vetor3[0] = nome;  // Não há função de conversão adequada de "std::string" para "int"

    return 0;
}