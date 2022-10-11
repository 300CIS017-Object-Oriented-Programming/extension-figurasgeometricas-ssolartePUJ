//
// Created by OS Mac on 11/10/22.
//

#ifndef EJERCICIO_POLIMORFISMO_TRIANGULO_H
#define EJERCICIO_POLIMORFISMO_TRIANGULO_H

#include <iostream>
#include "FiguraGeometrica.h"

using std::cin;
using std::cout;

class Triangulo : public FiguraGeometrica{
private:
    float altura;
public:
    float getAltura() const;

    void setAltura(float altura);

    float getBase() const;

    void setBase(float base);

private:
    float base;
public:
    Triangulo();
    Triangulo(float base, float altura);
    virtual ~Triangulo()a() = default;

    void dibujarFigura() override;
    float calcularArea() override;
    float calcularPerimetro() override;

};


#endif //EJERCICIO_POLIMORFISMO_TRIANGULO_H
