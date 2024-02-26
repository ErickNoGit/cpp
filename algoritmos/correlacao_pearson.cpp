#include <iostream>
#include <cmath>
#include <vector>
#include <locale.h>

using namespace std;

double calcularMedia(const vector<double> &array) {
    double tamanho = array.size(), soma = 0;
    for (double valor : array) {
        soma += valor;
    }
    return soma / tamanho;
}


vector<double> clcDiferenca(const vector<double> &array, double media) {
    vector<double> diferenca;
    for (double valor : array) {
        diferenca.push_back(valor - media);
    }
    return diferenca;
}


vector<double> clcQuadradoDiferenca(const vector<double> &array, double media) {
    vector<double> quadradoDiferenca;
    for (double valor : array) {
        double diferenca = valor - media;
        quadradoDiferenca.push_back(diferenca * diferenca);
    }
    return quadradoDiferenca;
}


double autoSoma(const vector<double> &array) {
    double soma = 0;
    for (double valor : array) {
        soma += valor;
    }
    return soma;
}


double clcProdutoSoma(const vector<double> &arrayX, const vector<double> &arrayY) {
    vector<double> arrayProduto;
    for (unsigned int i = 0; i < arrayX.size(); ++i) {
        arrayProduto.push_back(arrayX[i] * arrayY[i]);
    }
    return autoSoma(arrayProduto);
}


int main() {
    setlocale(0, "Portuguese");
    vector<double> vetX = {1, 2, 3, 4, 5}, vetY = {3., 5., 6., 7., 9.};

    double mediaX = calcularMedia(vetX);
    double mediaY = calcularMedia(vetY);
    cout << "Media de X e Y : (" << mediaX << ", " << mediaY << ")" << endl;

    vector<double> diferencaX = clcDiferenca(vetX, mediaX);
    vector<double> diferencaY = clcDiferenca(vetY, mediaY);
    vector<double> quadradoDiferencaX = clcQuadradoDiferenca(vetX, mediaX);
    vector<double> quadradoDiferencaY = clcQuadradoDiferenca(vetY, mediaY);

    double produtoSoma = clcProdutoSoma(diferencaX, diferencaY);
    double somaQuadradosX = autoSoma(quadradoDiferencaX);
    double somaQuadradosY = autoSoma(quadradoDiferencaY);

    double r = produtoSoma / sqrt(somaQuadradosX * somaQuadradosY); // 0.989949

    cout << "O valor da correlacao: " << r << endl;

    return 0;
}


/**

  *  F�rmula desenvolvida pelo Matem�tico Pearson em Estat�tica Aplicada 
  * 
  * A f�rmula para o c�lculo da correla��o de Pearson entre duas vari�veis,
  * geralmente denotadas como X e Y, � a seguinte:
  * 
  *                 ??? ? �[(X? - |X) � (Y? - |Y)]
  * r(XY) = ---------------------------------------------
  *            ?  ??? ? �(X?  - |X)� �  ??? ? �(Y? - |Y)�
  * 
  * Onde:
  * n -> � o n�mero de pares de observa��es.
  * ? representa a soma.
  * x e y s�o os valores das duas vari�veis (Pertence ao plano R�).
  * xy � o produto de x e y.
  * |X � a m�dia de x (Conjunto de valores independentes).
  * |Y � a m�dia de y (Conjunto de valore dependentes).
  * 
  * Essa f�rmula calcula o coeficiente de correla��o r, que varia de -1 a 1. Um valor de 1 indica uma
  * correla��o perfeita positiva, -1 indica uma correla��o perfeita negativa, e 0 indica aus�ncia de 
  * correla��o linear entre as vari�veis.
*/