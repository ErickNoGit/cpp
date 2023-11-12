#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

double calcularMedia(const vector<double>& array) {
    double tamanho = array.size(), soma = 0;
    for (double valor : array) {
        soma += valor;
    }
    return soma / tamanho;
}

vector<double> clcDiferenca(const vector<double>& array, double media) {
    vector<double> diferenca;
    for (double valor : array) {
        diferenca.push_back(valor - media);
    }
    return diferenca;
}

vector<double> clcQuadradoDiferenca(const vector<double>& array, double media) {
    vector<double> quadradoDiferenca;
    for (double valor : array) {
        double diferenca = valor - media;
        quadradoDiferenca.push_back(diferenca * diferenca);
    }
    return quadradoDiferenca;
}

double autoSoma(const vector<double>& array) {
    double soma = 0;
    for (double valor : array) {
        soma += valor;
    }
    return soma;
}

double clcProdutoSoma(const vector<double>& arrayX, const vector<double>& arrayY) {
    vector<double> arrayProduto;
    for (int i = 0; i < arrayX.size(); ++i) {
        arrayProduto.push_back(arrayX[i] * arrayY[i]);
    }
    return autoSoma(arrayProduto);
}

int main() {
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

    cout << "O valor da correlação é de: " << r << endl;

    return 0;
}

/**

  *  Fórmula desenvolvida pelo Matemático Pearson em Estatítica Aplicada 
  * 
  * A fórmula para o cálculo da correlação de Pearson entre duas variáveis,
  * geralmente denotadas como X e Y, é a seguinte:
  * 
  *                 ∑ₙⁱ ⁼ ¹[(Xᵢ - |X) · (Yᵢ - |Y)]
  * r(XY) = ---------------------------------------------
  *            √  ∑ₙⁱ ⁼ ¹(Xᵢ  - |X)² ·  ∑ₙⁱ ⁼ ¹(Yᵢ - |Y)²
  * 
  * Onde:
  * n -> é o número de pares de observações.
  * ∑ representa a soma.
  * x e y são os valores das duas variáveis (Pertence ao plano R²).
  * xy é o produto de x e y.
  * |X é a média de x (Conjunto de valores independentes).
  * |Y é a média de y (Conjunto de valore dependentes).
  * 
  * Essa fórmula calcula o coeficiente de correlação r, que varia de -1 a 1. Um valor de 1 indica uma
  * correlação perfeita positiva, -1 indica uma correlação perfeita negativa, e 0 indica ausência de 
  * correlação linear entre as variáveis.
*/