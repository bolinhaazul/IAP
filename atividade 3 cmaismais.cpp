#include <iostream>
using namespace std;
int main (){
    float nota1=0,nota2=0,nota3=0;
    cout<<"digite o valor da primeira nota:";
    cin>>nota1;
    cout<<"valor da segunda nota";
    cin>>nota2;
    cout<<"valor da terceira nota";
    cin>>nota3;
    float media=(nota1+nota2+nota3)/3;
    cout<<"a media entre as tres notas e:"<<media;
    return 0;
}