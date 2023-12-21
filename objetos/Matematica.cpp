#include "Matematica.h"
#include <cmath>

void Matematica::setRetangulo(float b, float h) {
    base = b;
    altura = h;
}

void Matematica::setTriangulo(float b, float h) {
    base = b;
    altura = h;
}

void Matematica::setQuadrado(float l) {
    lado = l;
}

float Matematica::calcularAreaRetangulo() {
    return base * altura;
}

float Matematica::calcularAreaTriangulo() {
    return (base * altura) / 2;
}

float Matematica::calcularAreaQuadrado() {
    return lado * lado;
}

float Matematica::calcularHipotenusa(float cateto1, float cateto2) {
    return sqrt(pow(cateto1, 2) + pow(cateto2, 2));
}
