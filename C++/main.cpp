#include <iostream>
#include "Recta.h"

using namespace std;

int main()
{
    //Se crea un objeto de la clase Recta (Instanciaciación)
    Recta* obj = new Recta();

    float x1,y1,x2,y2;//se definen 4 las variables de tipo float "x1", "y1", "x2", "y2".

    cout << "Digite el valor de X1: ";//Se pide que se digite el valor de X1
    cin >> x1;//se guarda el valor digitado en x1
    obj->setX1(x1);//se llama el metodo modificador setX1() y se encapsula "x1"

    cout << "Digite el valor de Y1: ";//Se pide que se digite el valor de Y1
    cin >> y1;//se guarda el valor digitado en y1
    obj->setY1(y1);//se llama el metodo modificador setY1() y se encapsula "y1"

    cout << "Digite el valor de X2: ";//Se pide que se digite el valor de X2
    cin >> x2;//se guarda el valor digitado en x2
    obj->setX2(x2);//se llama el metodo modificador setX2() y se encapsula "x2"

    cout << "Digite el valor de Y2: ";//Se pide que se digite el valor de Y2
    cin >> y2;//se guarda el valor digitado en y2
    obj->setY2(y2);//se llama el metodo modificador setY2() y se encapsula "y2"

    //se llama al metodo para calcular el parametro de A
    cout << "El valor de A es: " << obj->calcularA() << endl;

    //se llama al metodo para calcular el parametro de B
    cout << "El valor de B es: " << obj->calcularB() << endl;

    //se llama al metodo para calcular el parametro de C
    cout << "El valor de C es: " << obj->calcularC() << endl;
    return 0;
}
