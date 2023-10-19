#include <iostream>

using namespace std;

int main() {
	// Questao 1
	// Declare duas variáveis 'a' e 'b' e atribua valores a elas
	// Em seguida, crie uma terceira variável 'soma' que recebe a soma de 'a' e 'b'
	// Imprima o valor da variável 'soma'
	int a = 4;
	int b = 5;
	int soma = a + b;
	cout << "O resultado da soma: " << soma << endl;

	// Questao 2
	// Declare três variáveis 'num1', 'num2' e 'num3' e atribua valores a elas
	// Calcule a média desses três números e armazene o resultado em uma variável chamada 'media'
	// Imprima o valor da variável 'media'
	int num1 = 6;
	int num2 = 7;
	int num3 = 10;
	int media = (num1 + num2 + num3) / 3;
	cout << "Essa e a media: " << media << endl;

	// Questao 3
	// Declare duas variáveis 'x' e 'y' e atribua valores a elas
	// Troque os valores de 'x' e 'y' de modo que 'x' contenha o valor original de 'y' e vice-versa
	// Imprima os valores de 'x' e 'y'
	int x = 1;
	int y = 2;
	x = y;
	y = y - 1;
	cout << "X = 1, Y = 2," << " agora " << "X = " << x << " e Y = " << y << endl;

	// Questao 4
	// Declare duas variáveis 'base' e 'altura' e atribua valores a elas
	// Calcule a área do retângulo (base * altura) e armazene o resultado em uma variável chamada 'area'
	// Imprima o valor da variável 'area'
	int base = 40;
	int altura = 10;
	int area = base * altura;
	cout << "A area do retangulo e: " << area << endl;

	// Questao 5
	// Declare uma variável 'temperatura_celsius' e atribua um valor em graus Celsius a ela
	// Converta essa temperatura para Fahrenheit usando a fórmula F = C * (9/5) + 32 e armazene o resultado em uma variável 'temperatura_fahrenheit'
	// Imprima o valor da temperatura em Fahrenheit
	int temperaturaCelcius = 29;
	float temperaturaFahrenheit = temperaturaCelcius * (9.0 / 5) + 32;
	cout << "Converti 29 Graus Celsius em " << temperaturaFahrenheit << " Fahrenheit!!" << endl;

	// Questao 6
	// Declare três variáveis 'lado1', 'lado2' e 'lado3' e atribua valores a elas (representando os lados de um triângulo)
	// Calcule o perímetro do triângulo (soma dos comprimentos dos três lados) e armazene o resultado em uma variável chamada 'perimetro'
	// Imprima o valor do perímetro
	int lado1 = 2;
	int lado2 = 5;
	int lado3 = 2;
	int perimetro = lado1 + lado2 + lado3;
	cout << "Esse e o valor do perimetro: " << perimetro << endl;

	// Questao 7
	// Declare uma variável 'numero' e atribua um valor a ela
	// Verifique se o número é par ou ímpar e imprima uma mensagem apropriada
	int numero = 5;
	string par_impar = (numero % 2 == 0) ? "numero par" : "numero impar";
	cout << "O numero: " << numero << " e um " << par_impar << endl; 

	// Questao 8
	// Declare uma variável 'numero' e atribua um valor a ela
	// Verifique se o número é positivo, negativo ou zero e imprima uma mensagem apropriada
	int num = 6;
	string tipo;

	if (num > 0) {
		tipo = "Positivo!";
	} else if (num < 0) {
		tipo = "Negativo!";
	} else {
		tipo = "Zero!";
	};

	cout << "O numero que voce passou e " << tipo << endl;

	return 0;
}
