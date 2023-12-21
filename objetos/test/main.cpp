#include <iostream>
#include <string>
#include "Pessoa.h"

using namespace std;

int main() {
    Pessoa pessoa;
    pessoa.altura = 1.95;
    pessoa.peso = 76.1;
    pessoa.idade = 23;

    pessoa.correr('d');
    pessoa.correr('a');

    pessoa.pular('w');
    pessoa.pular('s');

    string dados;
    dados = pessoa.dadosSalto(pessoa.peso, pessoa.idade);
    cout << dados << endl;
}