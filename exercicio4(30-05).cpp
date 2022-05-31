#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char usuario[20], senha[12], confirmacao[12];
    int a=0,b=0,c=0,i=0;
    cout<<"digite o nome do usuario"<<endl;
    cin>> usuario;
    cout<<"digite a senha minimo de 6 caracteres, deve conter letras numeros e pelos menos um caractere especial "<<endl;
    cin>>senha;
    cout<<"confirme a senha"<<endl;
    cin>>confirmacao;
    int deucerto= strcmp(senha,confirmacao);
    if(deucerto!=0){
        cout<<"as senhas nao coincidem"<<endl;
    }
    if(strlen(confirmacao)<6){
        cout<<"Senha invalida"<<endl;
    }
    for(i=0; strlen(confirmacao)<i;i++){
        if(isdigit(confirmacao[i])){
            a++;
        }
       else if(isalpha(confirmacao[i])){
            b++;
        }
       else if(ispunct(confirmacao[i])){
            c++;
        }
    }
    if(a!=0 && b!=0 && c!=0){
        cout<<"cadastro registrado";
    }
    else{
        cout<<"senha invalida";
    }
    return 0;
}
