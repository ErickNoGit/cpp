#include <iostream>
#include <iomanip>

int main()
{
    struct Pecas
    {
        int codPeca1 = 12;
        int codPeca2 = 16;
        int qtdPeca1 = 1;
        int qtdPeca2 = 2;
        double valorUnitario1 = 5.30;
        double valorUnitario2 = 5.10;
    } pec;

    pec.valorUnitario1 *= pec.qtdPeca1;
    pec.valorUnitario2 *= pec.qtdPeca2;
    double valor = pec.valorUnitario1 + pec.valorUnitario2;

    std::cout << "VALOR A PAGAR: R$ " << std::fixed << std::setprecision(2) << valor;

    return 0;
}