#ifndef PESSOA_H
#define PESSOA_H
#include <string> // aceita outras libs

using namespace std;

class Pessoa {
private: // privados a classe
    char direcaoCima = 'w';
    char direcaoBaixo = 's';
    char direcaoDireita = 'd';
    char direcaoEsquerda = 'a';

public: // publico, qualquer um pode acessar
    float altura = 0;
    float peso = 0;
    int idade = 0;

    void correr(char direcao);
    void pular(char direcao);
    string dadosSalto(float peso, int idade);

};
#endif