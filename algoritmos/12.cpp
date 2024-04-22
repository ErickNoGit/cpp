#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double A = 3., B = 4., C = 5.2;
    double areaTriangulo = (A * C) / 2.;
    double areaCirculo = 3.14159 * (C * C);
    double areaTrapezio = ((A + B) * C) / 2.0;
    double areaQuadrado = B * B;
    double areaRetang = A * B;

    cout << "TRIANGULO: " << fixed << setprecision(3) << areaTriangulo << endl;
    cout << "CIRCULO: " << fixed << setprecision(3) << areaCirculo << endl;
    cout << "TRAPEZIO: " << fixed << setprecision(3) << areaTrapezio << endl;
    cout << "QUADRADO: " << fixed << setprecision(3) << areaQuadrado << endl;
    cout << "RETANGULO: " << fixed << setprecision(3) << areaRetang << endl;
    
    return 0;
}