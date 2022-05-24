#include <iostream>
using namespace std;
int main(){
    int idade=0, total=0, qtd=0, parada;
    float media=0.0;
    do
    {
        cout<<"insira a idade: ";
        cin>>idade;
        if (idade>0)
        {
            total+=idade;
            qtd++;
        }
        else{
            cout<<"valor invalido\n";
            cout<<"digite 1 pada continuar e -1 para sair\n";
            cin>>parada;
        }
    } while (parada!=-1);
    media=total/qtd;
    cout<<"total de pessoas: "<<qtd<<"\nmedia: "<<media;
    return 0;
}