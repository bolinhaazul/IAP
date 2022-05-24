#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int cat1, cat2;
    cout<<"insira o valor dos catetos do triangulo: ";
    cin>>cat1>>cat2;
    cout<<"o valor da hipotenusa e: " << hypot(cat1,cat2);
    return 0;
}