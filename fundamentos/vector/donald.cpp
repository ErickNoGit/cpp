#include <iostream>

int main() {
    // Possibilidade 1
    int vetor[5] = {1, 2, 3, 4, 5};
    int soma = 0;

    for (int v : vetor) {
        soma += v;
    }

    std::cout << soma << std::endl;
    std::cout << sizeof(soma) << std::endl;


    // Donald. Knuth
    soma = vetor[0];
    int n = sizeof(vetor) / sizeof(vetor[0]);
    for (int i = 1; i < n; i++) {
        soma += vetor[i];
    }

    std::cout << soma << std::endl;
    std::cout << sizeof(soma) << std::endl;
    std::cout << sizeof(vetor) << std::endl;

    return 0;
}