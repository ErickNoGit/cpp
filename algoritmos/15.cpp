#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double x1 = 1., x2 = 5., y1 = 7., y2 = 9.;
    double distancia = sqrt( pow(x2-x1, 2) + pow(y2-y1, 2) );
    cout << fixed << setprecision(4) << distancia;

    return 0;
}
