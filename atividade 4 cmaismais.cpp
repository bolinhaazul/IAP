#include<iostream>
using namespace std;
int main(){
    char sexo;
    cout<<"digite m para masculino e f para feminino:";
    cin>>sexo;
    if(sexo == 'm')
    {
        cout<<"Homem";
    }
    else if(sexo == 'f')
    {
        cout<<"Mulher";
    }
    else{
        cout<<"opcao invalida";
    }
    return 0;
}