#include <iostream>
#include <math.h>
using namespace std;
int main(){
    float a, b, c, d;
    cout<<"insira o valor do lado a: ";
    cin>> a;
    cout<<"insira o valor do lado b: ";
    cin>> b;
    c=a*a+b*b;
    d=sqrt(c);
    cout<<"o calculo para o teorema de pitagoras e\n"<<"h*h="<<a<<"*"<<a<<"+"<<b<<"*"<<b<<endl;
    cout<<"o valor da hipotenusa e: "<<d<<endl;
    return 0;
}