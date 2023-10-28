#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

double coeficienteA(vector<int> x, vector<int> y, int tamX, int tamY,
					double mediaX, double mediaY) {
	/**
		Formula de A

			  ∑(xᵢ - ẍ)·(yᵢ - ÿ)
	    a = ⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻
	        	∑(xᵢ - ẍ)²
		
		∑ = Auto-soma -> somatória dos termos
		xᵢ = valor de X quando i é igual ao termo diferente de 0, i = 1
		ẍ = média de X
		yᵢ = valor de Y quando i é igual ao termo diferente de 0, i = 1
		ÿ = média de Y
	*/

	vector<int> dominadorA, denominadorA; // armazenar os dominadores e denominadores de 'A'
	int autoSoma = 0;
	double mult, baseEXP, domA, denoA, a;

	// formulando Auto-soma do coeficiente angular 'A'
	for (int i = 0; i < tamX; i++) {
		mult = (x[i] - mediaX) * (y[i] - mediaY);
		dominadorA.push_back(mult); // armazena cada multiplo como dominador de 'A'

		baseEXP = pow((x[i] - mediaX), 2);
		denominadorA.push_back(baseEXP); // armazena cada base da potencia como denominador de 'A'
	}
	
	// Obtem a autoSoma do dominador
	for (int n : dominadorA) {
		autoSoma += n;
	}
	domA = autoSoma;
	autoSoma = 0;

	// Obtem a autoSoma do denominador
	for (int n : denominadorA) {
		autoSoma += n;
	}
	denoA = autoSoma;

	a = domA / denoA; // Fim da formula, achamos A
	return a;
}

double coeficienteB(double valorA, double mediaX, double mediaY) {
	/**
		Formula de B

		b ≃ ÿ - a * ẍ

		b = ponto de intersecção em y
		ÿ = média de y
		ẍ = média de x
	*/
	double b = mediaY - valorA * mediaX;
	return b;
}

string formRegressao(vector<int> x, vector<int> y) {
	// Retorna uma string como formula da reta

	// Variáveis básicas Inteiras
 	int tamX, tamY, soma, domA, denoA;
 	tamX = x.size();
 	tamY = y.size();
 	soma = 0;

 	// Variáveis respostas de precisão flutuante
 	double medX, medY, a, b;

 	if (tamX == tamY) {
 		// Obtendo média de cada vector
 		for (int num : x) {
 			soma += num;
 		}
 		medX = soma / tamX;
 		soma = 0;

 		for (int num : y) {
 			soma += num;
 		}
 		medY = soma / tamY;
 		soma = 0;

 		// Pegando valores do coeficiente e arredondando em 2 casas decimal
 		a = coeficienteA(x, y, tamX, tamY, medX, medY);
 		b = coeficienteB(a, medX, medY);

 		cout << endl;
 		cout << "-> Precisão de A e B" << endl;
 		cout << "-> A : " << a << endl;
 		cout << "-> B : " << b << endl;
 		cout << endl;

 		// arredondar em duas casas decimais
 		a = round(a * 100) / 100;
	 	b = round(b * 100) / 100;
 		
 		// formula da reta ŷ ≃ a * x[i] + b
 		string formula;
 		if (b < 0) { // sendo negativo
	 		formula = "ŷ ≃ " + to_string(a) + " · Xᵢ - " + to_string(abs(b));
	 		return formula;
 		} else {
	 		formula = "ŷ ≃ " + to_string(a) + " · Xᵢ + " + to_string(b);
	 		return formula;
 		}
 	} else {
 		return "Passe um tamanho válido";
 	}
}


int main() {

 	vector<int> seqX, seqY; // vectores bases
	seqX = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 	seqY = {4, 5, 9, 13, 17, 21, 25, 27, 28, 30};

 	string resultado = formRegressao(seqX, seqY);

 	// editando terminal
 	cout << endl;
 	cout << "------------------- FORMULA --------------------" << endl;
 	cout << "|                                              |" << endl;
 	cout << "|         " << resultado << "         |"<< endl;
  	cout << "|                                              |" << endl;
 	cout << "------------------------------------------------" << endl;
 	cout << endl;

 	return 0;
}