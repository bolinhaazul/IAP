#include <iostream>
#include <windows.h>
using namespace std;
int main(){
    float lado1, pedacos, lado2, i=0;
    cout<<"qual o tamanho do lado da barra de chocolate: ";
    cin>> lado1;
    do
    {
        lado1=lado1/2;
        i=i+1;
    } while (lado1>=2);
    pedacos=i*4;
    cout<<"a quantidade de pedacos que Ana tera no final e: "<<pedacos<< endl;
    return 0;
}