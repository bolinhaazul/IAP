#include <iostream>
using namespace std;
int main(){
    cout<<"digite os valores(valor negativo finaliza o programa): ";
    float soma=0;
    while(true){
        float valor;
        cin>>valor;
        if(valor<0)
        break;
        soma += valor;
    }
    cout<<"\nsoma: " << soma;
    cout<<endl;
    system("pause");
    return 0;
}