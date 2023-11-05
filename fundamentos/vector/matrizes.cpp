#include <iostream>
#include <string>

using namespace std;

// Iniciação a matrizes
int main() {
    // Criando uma matrix
    int matrixZero[2][3] = {{1, 2, 3},
                            {4, 5, 6}};

    int valorIndiceZero = matrixZero[0][0];
    cout << "Valor da Matrix no Indize zero: " << valorIndiceZero << endl;    

    // percorrendo os valores da matriz
    for (int l = 0; l < 2; ++l) {
        for (int c = 0; c < 3; ++c){
            cout << "Linha: " << l << ", Coluna: " << c << ", Valor: "<< matrixZero[l][c] << endl;
        }
    }
    cout << endl;

    // Subistituindo valores na matriz
    matrixZero[1][2] = 0;
    matrixZero[0][2] = 0;

    for (int l = 0; l < 2; l++) {
        for (int c = 0; c < 3; c++) {
            cout << "Linha: " << l << ", Coluna: " << c << ", Valor: "<< matrixZero[l][c] << endl;
        }
    }
    cout << endl;

    // Matrizes do tipo bool
    bool matrixUm[1][2] = {{true, false}};
    // True e False são 1 e 0, vamos tentar subistituir
    matrixUm[0][1] = 1; // Não há erro porque em C++ TRUE É 1 E FALSE É 0

    cout << "Posição: 0, Coluna: 0, Valor: " << matrixUm[0][0] << endl;
    cout << "Posição: 0, Coluna: 1, Valor: " << matrixUm[0][1] << endl;
    cout << endl;

    // Matrix do tipo double ou float
    double matrixDois[3][3] = {{6.2, 3.3, 1.4},
                               {0.5, 5.0, 0.6},
                               {9.1, 8.2, 3.4}};
    
    matrixDois[1][1] = 5.134422;

    for (int l = 0; l < 2; l++) {
        for (int c = 0; c < 3; c++) {
            cout << "Linha: " << l << ", Coluna: " << c << ", Valor: "<< matrixDois[l][c] << endl;
        }
    }



    return 0;
}