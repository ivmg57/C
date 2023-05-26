#include "Fraccion.hpp"

Fraccion::Fraccion(){
    num=0;
    den=1;
}

Fraccion::Fraccion(int n, int d){
    num=n;
    setDen(d);
}

int Fraccion::getNum() const{
    return num;
}

int Fraccion::getDen() const{
    return den;
}

void Fraccion::setNum(int n) {
    num=n;
    int mcdiv=mcd(num,den);
    num=num/mcdiv;
    den=den/mcdiv;
}
void Fraccion::setDen(int d) {
    if (d < 0){
        d*=-1;
        num*=-1;
    }
    int mcdiv=mcd(num,d);
    num=num/mcdiv;
    den=d/mcdiv;
   }
int Fraccion::mcd(int n, int d){
    int num1, num2, residuo;
    num1=abs(n);
    num2=abs(d);
    while (num2 > 0){
        residuo=num1 % num2;
        num1=num2;
        num2=residuo;
        
    }
    return num1;
}
Fraccion Fraccion::suma(Fraccion& otra){
    int denSuma=den * otra.getDen();
    int numSuma=num * otra.getDen() + den*otra.getNum();
    int mcdSuma=mcd(numSuma, denSuma);
    return Fraccion(numSuma, denSuma);
}
void Fraccion::imprime(){
    std::cout << num << "/" << den << "  ";
}