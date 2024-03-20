#include <iostream>
#include <iomanip>
#include <locale.h>

using namespace std;

int main() {
    setlocale(0, "Portuguese_Brazil");
    
    // Funções básicas do iostream
    // 1- std::cout usada para impressão
    cout << "Hello world, Olá mundo \n";
 
    // 2- std::cin usada para receber dados
    int num;
    cin >> num;
    cout << num << endl;

    // 3- std::endl pula uma linha e limpa o buffer
    cout << 'a' << endl;

    // 4- std::cerr Lidando com mensagens de erros no console
    int idade;
    cout << "Digite sua idade: ";
    cin >> idade;
    if ( idade <= 0 ) {
        cerr << "Error, você inseriu essa informacão: " << idade <<
        " esperava um int maior que 0." << endl;
        return 1; // necessário apresentar um return ou exit
    }

    // 5- std::setw coloca tabulações no terminal na impressao do 0 a n
    cout << "Hello" << setw(6) << "worl" << endl;

    // 6- std::setprecision para o terminal efine a precisao dos Floats
    double n = 3.141515232;
    cout << setprecision(4) << n << endl;

    // 7- std::fixed que define no terminal o padrao de impressao pós vírgula
    cout << fixed << setprecision(3) << n << endl;

    // 8- std::scientific Apresenta o numero floats em cientifico
    n = 1243.45464;
    cout << scientific << setprecision(4) << n << endl;

    // 9- std::boolalpha mostra resultado como true ou false
    cout << boolalpha << 1 << endl;         // 1
    cout << boolalpha << false << endl;         // false

    // 10- std::dec define a base da impressao como decimal
    cout << dec << 3.653656 << endl;

    // 11- std::hex define a base e saida como hexadecimal
    cout << hex << 1000 << endl;

    // 12- std::oct define a saida basse como octal
    cout << oct << 20 << endl;

    // 13- std::noshowbase que oculta a parte nao inteira das bases
    cout << hex << noshowbase << 34 << endl;        // 22

    // 14- std::showbase ativa a base a expressao inteira
    cout << hex << showbase << 34 << endl;      // 0x22

    // 15- std::noshowpoint desativa impressao de ponto decimal base fracao
    cout << noshowpoint << fixed << 3.0 << endl;

    // 16- std::showpoint ativa impressao de ponto decimal base fracao
    cout << fixed << showpoint << 30 << endl;

    // 17- std::noshowpos desativa a impressao do sinal de mais para positivos
    cout << noshowpos << 3 << endl;

    // 18- std::showpos ativa a impressao do sinal de mais para positivos
    cout << showpos << 3 << endl;

    // 19- std::uppercase define a saida hex ou afins como maiuscula
    cout << uppercase << hex << 255 << endl;

    // 20- std::nouppercase desativa a saida hex ou afins como maiuscula
    cout << nouppercase << hex << 1 << endl;

    // 21- std::skiwps ignora espaços em branco ao ler o dado no console
    cout << skipws << "1 23  3  3 3  " << "teste" << endl;

    // 22- std::noskiwps ignora espaços em branco ao ler o dado no console
    cout << noskipws << "1 23  3  3 3  " << "teste" << endl;

    // 23- std::ws Lê e descarta espaços em branco ao ler dados do console.
    // cout << ws << " 2 3  4  " << "teste" << endl; error

    return 0;
}