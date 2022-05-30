#include <iostream>
#include<cstring>
 
using namespace std;
 
int main() {
    char cep[20];
    cout<<"insira o cep: ";
    cin>>cep;
    if(strlen(cep)!=8){
        cout<<"cep invalido"<<endl;
    }
    else{
        cout<<"cep digitado foi: "<<cep<<endl;
    }
    return 0;
}