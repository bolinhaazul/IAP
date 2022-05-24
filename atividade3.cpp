#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    float r, a1, n, an=a1,soma, i;
    cout<<"quantos termos devera ter a progressao: ";
    cin>>n;
    cout<<"\n qual o primeiro termo da progressao: ";
    cin>>a1;
    cout<<"\n qual a razao da progressao: ";
    cin>>r;
    an=a1+(n-1)*r;
    soma = ((a1+an)*n)/2;
    cout<<"a soma da progressao aritmetica e: " << endl;
    for(i=a1;i<=an;i=i+r){
        if (i != an)
        {
            cout<< i << "+";
        }
        else{
            cout<<i<<"="<<soma<<endl;
        }
        
    }
    return 0;
}    