#include <iostream>
using namespace std;
int main(){
    string nome;
    int opcao;
    cout<<"escolha a opcao\n1-> Cadastrar\n2-> Listar\n3-> Excluir\n4-> Sair\n";
    cin>>opcao;
    switch (opcao)
    {
    case 1:
        system("cls");
        cout<<"insira seu nome\n";
        cin>>nome;
        system("pause");
        break;
    case 2:
        system("cls");
        cout<<"usuario nao cadastrado\n";
        system("pause");
        break;
    case 3:
        system("cls");
        cout<<"Lista de usuarios excluida com sucesso\n";
        system("pause");
        break;
    case 4:
        system("cls");
        cout<<"fechando programa\n";
        system("pause");
        break;
    default: cout<<"opcao invalida";
        break;
    }
}