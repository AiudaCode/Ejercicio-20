
import javax.swing.JOptionPane;

public class Main
{
    public static void main(String[] args)
    {
        //Se crea un objeto de la clase Recta (Instanciaciación)
        Recta obj = new Recta();
        
        //se definen 4 las variables de tipo float "x1", "y1", "x2", "y2".
        float x1, y1, x2, y2;
        
        //Se pide que se digite el valor de X1 y se guarda en la variable "x1" (Se convierte la variable a tipo float
        //porque el metodo showInputDialog convierte el dato digitado a String)
        x1 = Float.parseFloat(JOptionPane.showInputDialog(null, "Digite el valor de X1:"));
        obj.setX1(x1);//se llama el metodo modificador setX1() y se encapsula "x1"
        
        //Se pide que se digite el valor de Y1 y se guarda en la variable "y1"
        y1 = Float.parseFloat(JOptionPane.showInputDialog(null, "Digite el valor de Y1:"));
        obj.setY1(y1);//se llama el metodo modificador setY1() y se encapsula "y1"
        
        //Se pide que se digite el valor de X2 y se guarda en la variable "x2"
        x2 = Float.parseFloat(JOptionPane.showInputDialog(null, "Digite el valor de X2:"));
        obj.setX2(x2);//se llama el metodo modificador setX2() y se encapsula "x2"
        
        //Se pide que se digite el valor de Y2 y se guarda en la variable "y2"
        y2 = Float.parseFloat(JOptionPane.showInputDialog(null, "Digite el valor de Y2:"));
        obj.setY2(y2);//se llama el metodo modificador setY2() y se encapsula "y2"
        
        JOptionPane.showMessageDialog(null, "El valor de A es: " + obj.calcularA());
        JOptionPane.showMessageDialog(null, "El valor de B es: " + obj.calcularB());
        JOptionPane.showMessageDialog(null, "El valor de C es: " + obj.calcularC());
    }
}
