#include <iostream>
#include "Matematica.h"

int main() {
    Matematica mat; // Instancia

    mat.setRetangulo(5, 10);
    std::cout << "Area do retangulo: " << mat.calcularAreaRetangulo() << std::endl;

    mat.setTriangulo(4, 6);
    std::cout << "Area do triangulo: " << mat.calcularAreaTriangulo() << std::endl;

    mat.setQuadrado(7);
    std::cout << "Area do quadrado: " << mat.calcularAreaQuadrado() << std::endl;

    float resultado = mat.calcularHipotenusa(3, 4);
    std::cout << "Hipotenusa: " << resultado << std::endl;

    return 0;
}