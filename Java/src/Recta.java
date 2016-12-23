public class Recta
{
    //se definen los atributos privados:
    private float x1;//x1 de tipo float
    private float y1;//y1 de tipo float
    private float x2;//x2 de tipo float
    private float y2;//y2 de tipo float

    public Recta()
    {
        //se le asigna valor 0 por defecto en el constructor a las variables, x1, y1, x2, y2
        x1 = 0;
        y1 = 0;
        x2 = 0;
        y2 = 0;
    }
    
    //La formula para calcular estos parametros basicamente es esta:
    //  X-X1     Y-Y1
    // ------ = ------
    // X2-X1    Y2-Y1
    
    //Implementacion del metodo para calcular el parametro A
    public float calcularA()
    {
        float a;
        a = y2 - y1;
        return a;
    }
    
    //Implementacion del metodo para calcular el parametro B
    public float calcularB()
    {
        float b;
        b = x2 - x1;
        return b;
    }
    
    //Implementacion del metodo para calcular el parametro C
    public float calcularC()
    {
        float c;
        c = (-x1 * calcularA()) + (y1 * (x2 - x1));
        return c;
    }
    
    //Implementacion de los metodos Setter y Getters de los atributos de la clase
    public void setX1(float n)
    {
        x1 = n;
    }

    public float getX1()
    {
        return x1;
    }

    public void setY1(float n)
    {
        y1 = n;
    }

    public float getY1()
    {
        return y1;
    }

    public void setX2(float n)
    {
        x2 = n;
    }

    public float getX2()
    {
        return x2;
    }

    public void setY2(float n)
    {
        y2 = n;
    }

    public float getY2()
    {
        return y2;
    }
}