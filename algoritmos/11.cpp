#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double PI = 3.14159, raio = 3;
    double volume = (4.0/3.0) * PI * pow(raio, 3);
    cout << "VOLUME = " << fixed << setprecision(3) << volume;

    return 0;
}