/*
    Objetivo e encontrar o maior numero em um conjunto de numeros
*/

#include <iostream>
#include <locale.h>

int main() {
    // Base Linear f(n) = n + 1
    int A[] = {5, 3, 8, 12, 4, 9, 2, 26};
    int n = sizeof(A) / sizeof(A[0]);
    int max = A[0];

    for (int i = 1; i < n; ++i) {
        if (A[i] > max) {
            max = A[i];
        }
    }

    std::cout << "Maior numero e : " << max << std::endl;
    
    return 0;
}