#ifndef RECTA_H
#define RECTA_H


class Recta
{
    public:
        Recta();
        virtual ~Recta();
        float calcularA();
        float calcularB();
        float calcularC();

        //se definen los metodos Setter y Getters de los atributos de la clase:
        //x1, y1, x2, y2, a, b, c
        void setX1(float n);
        float getX1();
        void setY1(float n);
        float getY1();
        void setX2(float n);
        float getX2();
        void setY2(float n);
        float getY2();
    protected:

    private:
        //se definen los atributos privados:
        float x1;//x1 de tipo float
        float y1;//y1 de tipo float
        float x2;//x2 de tipo float
        float y2;//y2 de tipo float
};

#endif // RECTA_H
