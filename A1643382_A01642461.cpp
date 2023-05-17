#include<iostream>
#include<cmath>
using namespace std;

class Point
{
    private:
        double X;
        double Y;
    public:
        Point()
        {
            X = 0;
            Y = 0;
        }
        Point(double X2, double Y2)
        {
            X = X2;
            Y = Y2;
        }
        ~Point(){}
        double distance(Point uno, Point dos)
        {
            double restaX = pow((uno.getX()-dos.getX()),2);
            double restaY = pow((uno.getY()-dos.getY()),2);
            double distancia = sqrt(restaX+restaY);
            return distancia;
        }
        void setX(double X2)
        {
            X = X2;
        }
        void setY(double Y2)
        {
            Y = Y2;
        }
        double getX()
        {
            return X;
        }
        double getY()
        {
            return Y;
        }
};

class Triangle
{
    private:
        Point vertex1;
        Point vertex2;
        Point vertex3;
    public:
        Triangle()
        {
            vertex1.setX(0);
            vertex1.setY(0);
            vertex2.setX(50);
            vertex2.setY(30);
            vertex3.setX(25);
            vertex3.setY(10);
        }
        Triangle(Point nuevoVertex1, Point nuevoVertex2, Point nuevoVertex3)
        {
            vertex1 = nuevoVertex1;
            vertex2 = nuevoVertex2;
            vertex3 = nuevoVertex3;
        }
        ~Triangle(){}
        double perimeter(Triangle triangulo)
        {  
            Point vertice1 = triangulo.getVertex1();
            Point vertice2 = triangulo.getVertex2();
            Point vertice3 = triangulo.getVertex3();
            double lado1 = vertice1.distance(vertice1,vertice2);
            double lado2 = vertice2.distance(vertice2,vertice3);
            double lado3 = vertice3.distance(vertice3,vertice1);
            double perimetro = lado1+lado2+lado3;
            return perimetro;
        }
        double area(Triangle triangulo) //Fórmula de Herón.
        {
            Point vertice1 = triangulo.getVertex1();
            Point vertice2 = triangulo.getVertex2();
            Point vertice3 = triangulo.getVertex3();
            double lado1 = vertice1.distance(vertice1,vertice2);
            double lado2 = vertice2.distance(vertice2,vertice3);
            double lado3 = vertice3.distance(vertice3,vertice1);
            double perimetro = lado1+lado2+lado3;
            double s = perimetro/2;
            double aria = sqrt(s*(s-lado1)*(s-lado2)*(s-lado3));
            return aria;
        }
        void setVertex1(Point nuevoVertex1)
        {
            vertex1 = nuevoVertex1;
        }
        void setVertex2(Point nuevoVertex2)
        {
            vertex2 = nuevoVertex2;
        }
        void setVertex3(Point nuevoVertex3)
        {
            vertex3 = nuevoVertex3;
        }
        Point getVertex1()
        {
            return vertex1;
        }
        Point getVertex2()
        {
            return vertex2;
        }
        Point getVertex3()
        {
            return vertex3;
        }
};

int main()
{
    Triangle prueba;
    Point primerVertice;
    Point segundoVertice;
    Point tercerVertice;
    primerVertice.setX(-10);
    primerVertice.setY(0);
    segundoVertice.setX(0);
    segundoVertice.setY(10);
    tercerVertice.setX(10);
    tercerVertice.setY(0);
    prueba.setVertex1(primerVertice);
    prueba.setVertex2(segundoVertice);
    prueba.setVertex3(tercerVertice);
    cout << prueba.perimeter(prueba) << endl;
    cout << prueba.area(prueba) << endl;
}