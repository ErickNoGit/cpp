#ifndef MATEMATICA_H
#define MATEMATICA_H

class Matematica {
private:
    float base;
    float altura;
    float lado;

public:
    void setRetangulo(float b, float h);
    void setTriangulo(float b, float h);
    void setQuadrado(float l);

    float calcularAreaRetangulo();
    float calcularAreaTriangulo();
    float calcularAreaQuadrado();

    float calcularHipotenusa(float cateto1, float cateto2);
};

#endif