#include "Recta.h"

Recta::Recta()
{
    x1 = 0;
    y1 = 0;
    x2 = 0;
    y2 = 0;
}

Recta::~Recta()
{
    //dtor
}

//La formula para calcular estos parametros basicamente es esta:
//  X-X1     Y-Y1
// ------ = ------
// X2-X1    Y2-Y1
float Recta::calcularA()
{
    float a;
    a = y2 - y1;
    return a;
}

float Recta::calcularB()
{
    float b;
    b = x2 - x1;
    return b;
}

float Recta::calcularC()
{
    float c;
    c = (-x1 * calcularA()) + (y1 * (x2 - x1));
    return c;
}

//Implementacion de los metodos Setter y Getters de los atributos de la clase
void Recta::setX1(float n)
{
    x1 = n;
}

float Recta::getX1()
{
    return x1;
}

void Recta::setY1(float n)
{
    y1 = n;
}

float Recta::getY1()
{
    return y1;
}

void Recta::setX2(float n)
{
    x2 = n;
}

float Recta::getX2()
{
    return x2;
}

void Recta::setY2(float n)
{
    y2 = n;
}

float Recta::getY2()
{
    return y2;
}
