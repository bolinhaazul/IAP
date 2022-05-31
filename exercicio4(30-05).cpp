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
    for(i=0;i<strlen(confirmacao);i++){
        if(isalpha(confirmacao[i])){
            a++;
        }
        if(isdigit(confirmacao[i])){
            b++;
        }
        if (ispunct(confirmacao[i])){
            c++;
        }
    }
    if (a>0 && b>0 && c>0){
            cout<<"senha aceita"<<endl;
        }
        else{
            cout<<"senha nao aceita"<<endl;
        }
    return 0;
}
