#include <iostream>
#include <iomanip>
#include <string>


int main()
{
    struct vendedor {
        std::string nome = "JOAO";
        double salarioFixo = 500.00;
        double totalVendas = 1230.30;
    } vend;

    double comissao = 0.15;
    comissao *= vend.totalVendas;
    comissao += vend.salarioFixo;

    std::cout << "TOTAL = R$ " << std::fixed << std::setprecision(2) << comissao;

    return 0;
}