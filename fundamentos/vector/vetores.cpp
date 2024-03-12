#include <iostream>
#include <vector>
#include <string>
#include <locale.h>

using namespace std;

int main() {
    setlocale(0, "Portuguese_Brazil");
    // Manipulando e criando vetores
    int vet[1]; // vetor de inteiros, vazio, com 1 bloco disponivel

    // Acessando valor do vetor
    cout << "Valor do vetor: " << vet[0] << endl;
    cout << "N�o � zero por que ele imprime um valor aleat�rio da mem�ria!" << endl;

    cout << endl;

    // adicionando valor
    vet[0] = 5;
    cout << "O vetor recebeu na posi��o zero o valor: " << vet[0] << endl;

    vet[0] = 2;
    cout << "Agora tiramos o 5 da posi��o zero e colocamos o valor: " << vet[0] << endl;

    cout << endl;

    // O tamanho do vetor n�o pode ser alterado e ele � acessado por indice
    float vet1[5] = {1.3, 2.2, -4.0, .05, 3.1};
 
    // Vamos acessar o quarto valor, ent�o � 4 - 1 que � 3
    float quartoValor = vet1[3];
    cout << "O quarto valor do vetor um �: " << quartoValor << endl;

    // Alterando o valor da quarta posi��o
    vet1[3] = 3;
    cout << "O quarto valor agora �: " << vet1[3] <<  endl;

    // Vetores do tipo float ou double aceitam inteiros, mas inteiros n�o aceitam floats ou doublues
    // vamos comparar
    if (vet1[3] == 3.0) {
        cout << "SIM, o valor : " << vet1[3] << " de vet1[3] � igual ao float 3.0" << endl; // True
    } else {
        cout << "N�O, valor : " << vet1[3] << " de vet1[3] � diferente do float 3.0" << endl;
    }

    cout << endl;

    // Para usar valores de vetores de n-tamnhos usa-se a biblioteca vector de std::vector
    // Vetor de tamnho especial
    std::vector<string> vetorStrings; // n-tamnho
    // vetorStrings[0] = "Jo�o"; // N�o d� erro mas da falha na segmenta��o
    // vetorStrings[1] = "Maria"; // N�o d� erro mas da falha na segmenta��o

    // Mostrando posi��es
    // int j = 0;
    // for (string i: vetorStrings) {
    //    cout << "Posi��o " << j << "Nome : " << i << endl; // Error : Falha de segmenta��o (imagem do n�cleo gravada)
    //    ++j;
    // }

    // Acessando manualmente
    // cout << "Posi��o zero: " << vetorStrings[0] << endl;
    // cout << "Posi��o um: " << vetorStrings[1] << endl;
    // cout << "Posi��o dois: " << vetorStrings[2] << endl;
    // cout << "Posi��o tr�s: " << vetorStrings[3] << endl;
    // cout << "Posi��o quantro: " << vetorStrings[4] << endl;
    // Error : Falha de segmenta��o (imagem do n�cleo gravada)

    // Error : Falha de segmenta��o (imagem do n�cleo gravada)
    // cout << "Posi��o zero: " << vetorStrings[0] << endl;
    // cout << "Posi��o Um: " << vetorStrings[1] << endl;

    // Vamos tentar um valor fixo de strings
    vetorStrings = {"Jo�o", "Maria", "Santos", "Henrique"};

    cout << "Tentando acessar o primeiro nome que �: " << vetorStrings[0] << endl;

    // Acessando todos com la�o for
    int j = 0;
    for (string i : vetorStrings) {
        cout << "Posi��o " << j << ", Nome: " << i << endl;
        ++j;
    }
    cout << endl;

    // Tentando trocar um nome
    vetorStrings[2] = "Lucas";
    cout << "A posi��o 2 com nome Santos foi trocado para: " << vetorStrings[2] << endl;

    // Imprimindo todos
    j = 0;
    for (string i : vetorStrings) {
        cout << "Posi��o " << j << ", Nome: " << i << endl;
        ++j;
    }
    cout << endl;

    // Vamos aplicar aritm�tica em vetores
    int vetorUm[5] = {6, 5, 4, 3, 2}, vetorDois[5] = {2, 3, 4, 5, 6};
    // vector<int> = vetorUm * vetorDois; // Error : express�o deve ser do tipo aritm�tico ou de enumera��o sem escopo 
    int vetorRes[5];
    for (int i = 0; i < 5; ++i) {
        vetorRes[i] = vetorUm[i] + vetorDois[i]; // acessa o endere�o 0, recolhe o valor, opera e armazena
        cout << "Soma na posi��o " << i << ", " << vetorUm[i] << " + " << vetorDois[i] << " = " << vetorRes[i] << endl;
    }
    cout << endl;

    // Se eu tentar acessar um valor acima do vetor
    int x = vetorRes[5];
    cout << "Valor de x: " << x << endl; // tentou acessar um n�mero sem prop�sito


    int y = vetorRes[4];
    cout << "Valor de y: " << y << endl; // indice 4 valor 8
    
    cout << endl;

    // Tentando colocar tipos de dados diferentes en vetores
    int vetor3[7] = {1, 2, 3, 4, 5, 6};

    // Colocando caracter
    vetor3[0] = 'A';

    // Mostrando cada valor do vetor
    for (int i = 0; i < 6; ++i) {
        cout << "Valor da posic�o " << i << ", : " << vetor3[i] << endl;
    } // A posi��o 0 receber� o inteiro 65 ao inv?s do caracter 'A'

    // Tentando colocar string (cadeia de caracter)
    string nome = "Alves";
    // vetor3[0] = nome;  // N�o h� fun��o de convers�o adequada de "std::string" para "int"

    return 0;
}