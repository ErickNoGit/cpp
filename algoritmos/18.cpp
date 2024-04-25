#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
    int entrada = 576;
    const int cedulas[7] =  {100, 50, 20, 10, 5, 2, 1};
    const int len = sizeof(cedulas) / sizeof(cedulas[0]);
    vector<int> modulos;

    for (int i = 0; i < len; ++i)
    {
        int base = entrada - (entrada % cedulas[i]);
        entrada -= base;
        modulos.push_back(base);
        
    }

    for(int j = 0; j < len; ++j)
    {
        modulos[j] /= cedulas[j];
        cout << modulos[j] << " nota(s) de R$ " << cedulas[j] << ",00\n";
    }

    return 0;
}