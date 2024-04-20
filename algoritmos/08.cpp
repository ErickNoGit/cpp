#include <iostream>
#include <iomanip>

int main()
{
    struct funonario
    {
        int num;
        int horasTrabalho;
        double valorHora;
        double salario;
    } fun;

    fun.num = 25;
    fun.horasTrabalho = 100;
    fun.valorHora = 5.50;
    fun.salario = fun.horasTrabalho * fun.valorHora;

    std::cout << "NUMBER = " << fun.num << std::endl;
    std::cout << "SALARY = U$ " << std::fixed << std::setprecision(2) << fun.salario;

    return 0;
}