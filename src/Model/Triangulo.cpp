//
// Created by OS Mac on 11/10/22.
//

#include "Triangulo.h"

Triangulo::Triangulo() {
    base = 0;
    altura = 0;

    nombreFigura = "Triangulo Equilatero";
}

Triangulo::Triangulo(float base, float altura):Triangulo(){
    this -> altura = altura;
    this -> base = base;
}

void Triangulo::dibujarFigura(){
    cout << nombreFigura;
    cout <<"\n";

    cout << "    *\n";
    cout << "   ***\n";
    cout << "  *****\n";
}

float Triangulo::calcularArea() {
    area = (base*altura)/2;
    return area;
}

float Triangulo::calcularPerimetro() {
    perimetro = base*3;
    return perimetro;
}




float Triangulo::getAltura() const {
    return altura;
}

void Triangulo::setAltura(float altura) {
    Triangulo::altura = altura;
}

float Triangulo::getBase() const {
    return base;
}

void Triangulo::setBase(float base) {
    Triangulo::base = base;
}
