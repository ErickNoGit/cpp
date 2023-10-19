#include <iostream>

using namespace std;

// Meu hello world
int main() {
	std::cout << "Hello World" << std::endl;
	
	// Tipos de dados
	int numero = 1;
	float real = 3.14;
	double preal = 3.141516;
	char caracter = 'A';
	bool tbolean = true;
	bool fbolean = false;

	std::cout << numero << ", " << real << ", " << preal << std::endl;

	std::cout << caracter << std::endl;
	std::cout << tbolean << std::endl;
	std::cout << fbolean << std::endl;
	
	return 0;
}