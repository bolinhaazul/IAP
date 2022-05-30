#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char usuario[20], senha[12], confirmacao[12];
    cout<<"digite o nome do usuario"<<endl;
    cin>> usuario;
    cout<<"digite a senha"<<endl;
    cin>>senha;
    cout<<"confirme a senha"<<endl;
    cin>>confirmacao;
    int deucerto= strcmp(senha,confirmacao);
    if(deucerto!=0){
        cout<<"as senhas nao coincidem";
    }
    return 0;
}