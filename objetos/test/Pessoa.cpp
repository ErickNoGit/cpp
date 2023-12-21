#include <iostream>
#include <string>
#include <cmath>
#include "Pessoa.h"

using namespace std;

void Pessoa::correr(char direcao) {
    if (direcao == Pessoa::direcaoCima) {
        std::cout << "A pessoa correu para cima" << std::endl;
    } else if (direcao == Pessoa::direcaoBaixo) {
        std::cout << "A pessoa correu para baixo" << std::endl;
    } else if (direcao == Pessoa::direcaoDireita) {
        std::cout << "A pessoa correu para direita" << std::endl;
    } else if (direcao == Pessoa::direcaoEsquerda) {
        std::cout << "A pessoa correu para esquerda" << std::endl;
    } else {
        std::cout << "Digite uma direção valida" << std::endl;
    }
}

void Pessoa::pular(char direcao) {
    if (direcao == Pessoa::direcaoCima) {
        std::cout << "A pessoa pulou" << std::endl;
    } else {
        std::cout << "A pessoa nao pulou" << std::endl;
    }
}

string Pessoa::dadosSalto(float peso, int idade) {
    //formula inventada
    //Pessoa::altura = altura; também funcionaria como paramêtro
    double alturaSalto = std::abs((Pessoa::altura * peso) / idade) / std::abs(peso);
    return "O salto foi de aproximadamente " + std::to_string(alturaSalto) + "cm";
}