#include <iostream>

using namespace std;

int main(){
    string nome;
    char conceito;
    float nota;
    cout<<"insira o nome do aluno:";
    cin>>nome;
    cout<<"insira a nota do aluno:";
    cin>>nota;
    if(nota>89.9){
        conceito = 'A';
    }
    else if(nota<90 && nota>74.9){
        conceito='B';
    }
    else if(nota<75 && nota>59.9){
        conceito='C';
    }
    else{
        conceito='R';
    }
    cout<<"ola "<<nome<<"\nsua nota foi "<<nota<<"\nseu conceito foi "<<conceito;
    return 0;
}