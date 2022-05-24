#include<iostream>
#include <math.h>
using namespace std;
int main(){
    int a=0,b=0;
    cout<<"digite um numero inteiro:";
    cin >>a;
    cout <<"digite um numero inteiro:";
    cin >>b;
    float soma=a+b, diferenca=a-b, produto=a*b, divisao=a/b, resto=a%b;
    cout <<"soma:"<<soma<<"\nsubtracao:"<<diferenca<<"\nmultiplicacao:"<<produto<<"\ndivisao:"<<divisao<<"\nresto:"<<resto;
    return 0;
}