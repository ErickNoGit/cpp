#include <iostream>

using namespace std;

int main() {
    // Definindo variáveis no C++

    /*
			Tipo				Tamanho			Valores
		
		unsigned short int		2 bytes			0 a 65.535
		
		short int				2 bytes			- 32.768 a 32.767
		
		unsigned long int		4 bytes			0 a 4.294.967.295
		
		long int				4 bytes			-2.147.483.648 a 2.147.483.647
		
		char					1 byte			256 valores de caractere
		
		bool					1 byte			Verdadeiro ou falso
		
		float					4 bytes			1,2e-38 a 3,4e38

		double					8 bytes			2,2e-308 a 1,8e308

    */
    cout << "Hello world" << endl;

    int idade;         // 4 bytes, equivale a 32 bits
    long int Idade;    // 4 bytes, equivale a 32 bits

    // A palavra reservada 'unsigned' se refere a inteiros positivos
    unsigned long int IDADE = 10; // IDADE é sempre positivo, pesando 4 bytes do tipo inteiro

    // 'signed' é a palavra reservada adotada por padrão para positivos e negativos
    int positividade = -3; // Não há um erro de código, porque o padrão é 'signed'

    // Declarando
    signed int celcius = 30;
    celcius = -2; // Não dá erro

    // Vamos tentar atribuir um valor negativo a uma variável 'unsigned'
    // Isso resultará em um comportamento indefinido
    // IDADE = -10;

    std::cout << "Valor de IDADE: " << IDADE << std::endl;
    std::cout << "Valor de celcius: " << celcius << std::endl;

    // Existe também o tipo curto chamado de short
    short int valor; 		// 2 bytes, equivale a 16 bits
    valor = 32767;		// Valor maximo positivo
    valor = -32768;		// valor maximo negativo

    std::cout << "Valor Máximo : " << valor << std::endl;

    // Os caracteres no entando só cabem 1 byte de 256 tipos nas tabela ASCII
    char caract = 'A';
    char myCaract = 'B'; 		// Irá pegar apenas B

    std::cout << "Esse é o caracter A : " << caract << std::endl;
    std::cout << "Esse é o caracter B : " << myCaract << std::endl;

    // Uma sequencia de caracter
    char seqCarac[4] = "ABC"; 		// Necessário aspas duplas ! ! ! !
    std::cout << "Sequencia de caracteres : " << seqCarac << std::endl;

    // Usando std::string
    std::string nome = "Erick Alves";
    std::cout << "Meu nome é " << nome << std::endl;

    // Tipos boleanos
    bool ver = true;
    bool fal = false;

    std::cout << "Esse é o valor true : " << ver << std::endl;	 // tratado como 1, portanto 1 é verdadeiro
    std::cout << "Esse é o valor false : " << fal << std::endl; // tratado como 0, portanto 0 é false

    return 0;
}
