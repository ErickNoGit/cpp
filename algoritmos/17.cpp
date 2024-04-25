#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double tempo = 10, velocidade = 85;
    double litros = (tempo * velocidade) / 12.;
    cout << fixed << setprecision(3) << litros;

    return 0;
}