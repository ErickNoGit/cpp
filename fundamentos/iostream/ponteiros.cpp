#include <iostream>
#include <string>
#include <locale.h>

int main() {
    setlocale(0, "Portuguese_Brazil");

    int *p;
    int vet[] = {1, 2, 5, 7};
    p = vet;
    std::cout << p << std::endl;    // endereço na memória

    int *pont;
    int veto[] = {1, 2, 5, 7};
    pont = veto;
    std::cout << pont[1] << std::endl;      // número 2

    *pont = 41662;
    std::cout << *pont << std::endl;    // 41662

    // fixar
    if ( p[2] > *pont ) std::cout << "true" << std::endl;
    else std::cout << "false" << std::endl;

    // testando &
    // int endereco;
    // *p = endereco; Error
    std::cout << p << std::endl;

    return 0;
}
