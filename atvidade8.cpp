#include <iostream>
#include <string.h>
#include <windows.h>
using namespace std;
int main (){
    int tam, i = 0, esp, ast, n=1, a;
    cout<<"qual o tamanho da arvore? ";
    cin>>tam;
    while (i<=tam){
    for (esp = 1; esp<=(tam-i);esp++ ){
        cout<<" ";
    }
    for(ast=1;ast<=(2*i-1);ast++){
        cout<<"*";
    }
    cout<< endl;
    i++;
    }
    while (n<=(tam/2))
    {
    for (a=1;a<=(tam-1);a++)
    {
        cout<< " ";
    }
    for (int b=0;b<=0;b++)
    {
        cout <<"*";
    }
    cout<<endl;
    n++;
    }
    return 0;
    }   

