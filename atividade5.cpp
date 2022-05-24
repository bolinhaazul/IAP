#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
int main(){
    float a=0, b=0, c=0, x1=0, x2=0, d=0;
    cout << "insira os valores de a, b, e c: ";
    cin>> a >> b >> c;
    d=(b*b)-4*a*c;
    cout<<"delta e igual a: "<< d << endl; 
    x1=(-b+sqrt(d))/2*a;
    x2=(-b-sqrt(d))/2*a;
    if (0<=d)
    {
        cout<<"o valor de x1 e: "<< x1 << endl;
        cout<<"o valor de x2 e: "<< x2 << endl;
    }
    else
    {
        cout<<"delta menor que zero nao e possivel calcular as raizes da funcao";
    }
    return 0;
}
