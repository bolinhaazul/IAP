#include <iostream>
#include <windows.h>
#define gasolina 8
#define alcool 6
using namespace std;
int main(){
    float distancia, consumoa, consumog, custoa, custog;
    cout<<"quantos quilometros por litro seu carro faz com alcool?"<<endl;
    cin>>consumoa;
    cout<<"quantos quilometros por litro seu carro faz com gasolina?"<<endl;
    cin>>consumog;
    cout << "qual distancia da sua viagem?" << endl;
    cin>>distancia;
    custoa=(distancia/consumoa)*alcool;
    custog=(distancia/consumog)*gasolina;
    cout<<"o custo para fazer a viagem usando alcool e: R$"<<custoa<<endl;
    cout<<"o custo para fazer a viagem usando gasolina e: R$"<<custog<<endl;
    return 0;
}