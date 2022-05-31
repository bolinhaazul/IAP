#include <iostream>
#include <cstring>


using namespace std;

int main()
{
    char nome[3][20],aux[20];
    int i=0, j=0;
    for(i=0;i<3;i++){
        cout<<"insira o nome da "<<i+1<<" pessoa"<<endl;
        cin>>nome[i];
    }
    cout<<"os nomes na ordem alfabetica sao"<<endl;
    for(i=1;i<3;i++){
    for(j=1;j<3;j++){
        if(strcmp(nome[j-1],nome[j])>0){
            strcpy(aux,nome[j-1]);
            strcpy(nome[j-1],nome[j]);
            strcpy(nome[j],aux);
        }
    }
    }
    for(j=0;j<3;j++){
        cout<<nome[j]<<endl;
    }
    return 0;
}
