#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

// Formulas matemáticas no fim do código

double coeficienteA(vector<int> x, vector<int> y, int tamX, double mediaX, double mediaY) {
	// armazenar os dominadores e denominadores de A
	vector<int> dominadorA, denominadorA;
	double produtos, basePotencia, A;

	// formulando Auto-soma do coeficiente angular A
	for (int i = 0; i < tamX; i++) {
		// dominadores
		produtos = (x[i] - mediaX) * (y[i] - mediaY);
		dominadorA.push_back(produtos);

		// denominadores
		basePotencia = pow((x[i] - mediaX), 2);
		denominadorA.push_back(basePotencia);
	}
	produtos = 0;
	basePotencia = 0;

	for (int i = 0; i < dominadorA.size(); i++) {
		produtos += dominadorA[i];
		basePotencia += denominadorA[i];
	}
	A = produtos / basePotencia;
	return A;
}

double coeficienteB(double valorA, double mediaX, double mediaY) {
	double B = mediaY - valorA * mediaX;
	return B;
}

string formRegressao(vector<int> x, vector<int> y) {
	// Retorna uma string como formula da reta
	// Variáveis básicas Inteiras
 	int tamanhoX = x.size(), tamanhoY = y.size(), somaX = 0, somaY = 0;

 	// Variáveis respostas de precisão flutuante
 	double mediaX, mediaY, a, b;

 	if (tamanhoX == tamanhoY) {
 		// Obtendo média de cada vector
 		for (int i = 0; i < tamanhoX; i++) {
 			somaX += x[i];
 			somaY += y[i];
 		}
 		mediaX = somaX / tamanhoX;
 		mediaY = somaY / tamanhoY;

 		// Obtendo os valores de A e B
 		a = coeficienteA(x, y, tamanhoX, mediaX, mediaY);
 		b = coeficienteB(a, mediaX, mediaY);

 		cout << endl;
 		cout << "-> Precisão de A e B" << endl;
 		cout << "-> A : " << a << endl;
 		cout << "-> B : " << b << endl;
 		cout << endl;

 	 	string form;
 		// formula da reta: ŷ ≃ a · Xᵢ + b
 		if (b < 0) {
	 		form = "ŷ ≃ " + to_string(a) + " · Xᵢ - " + to_string(b);
	 		return form;
 		} else {
	 		form = "ŷ ≃ " + to_string(a) + " · Xᵢ + " + to_string(b);
	 		return form;
 		}
 	} else {
 		return "Passe um tamanho válido";
 	}
}

int main() {
	// Vetores básico
 	vector<int> seqX = {1, 2, 3, 4, 5}, seqY = {3, 7, 5, 11, 14};
 	// resultado = 2,6 * X + 0.2
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
/**
  	Formula da Regressão Linear Simples
	Ŷ ≃ A · X + B
	
	Y = número resposta quando variável X é i-termo
	A = Coeficiente angular da reta
	X = Variável a qual entra o i-termo
	B = Ponto de intersecção Y quando X é 0

	Formula de A

		∑(xᵢ - ẍ)·(yᵢ - ÿ)
    a = ⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻⁻
       	∑(xᵢ - ẍ)²
	
	∑ = Auto-soma -> somatória dos termos
	xᵢ = Valor de X quando i é igual ao termo diferente de 0, i = 1
	ẍ = Média de X
	yᵢ = Valor de Y quando i é igual ao termo diferente de 0, i = 1
	ÿ = Média de Y
	

	Formula de B

	b ≃ ÿ - a · ẍ

	b = Ponto de intersecção em Y
	ÿ = Média de Y
	ẍ = Média de X
*/