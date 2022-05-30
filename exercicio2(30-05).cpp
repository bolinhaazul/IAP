#include <iostream>
#include <cstring>


using namespace std;

int main()
{
    char nome1[20],nome2[20],nome3[20];
    cout<<"insira o nome da primeira pessoa "<<endl;
    cin>>nome1;
    cout<<"insira o nome da segunda pessoa "<< endl;
    cin>>nome2;
    cout<<"insira o nome da terceira pessoa "<<endl;
    cin>>nome3;
    if(strcmp(nome1,nome2)<0 && strcmp(nome1,nome3)<<0){
        if(strcmp(nome2,nome3)){
            cout<<nome1<<", "<<nome2<<", "<<nome3<<endl;
        }
        else{
            cout<<nome1<<", "<<nome3<<", "<<nome2<<endl;
        }
    }   
    if(strcmp(nome2,nome1)<0 && strcmp(nome2,nome3)){
        if(strcmp(nome1,nome3)){
            cout<<nome2<<", "<<nome1<<", "<<nome3<<endl;
        }
        else{
            cout<<nome2<<", "<<nome3<<", "<<nome1<<endl;
        }
    }
    if(strcmp(nome3,nome1)<0 && strcmp(nome3,nome2)<0){
        if(strcmp(nome1,nome2)){
            cout<<nome3<<", "<<nome1<<", "<<nome2<<endl;
        }
        else{
            cout<<nome3<<", "<<nome2<<", "<<nome1<<endl;
        }
    }
    return 0;
}