#include <iostream>
#include <math.h>
using namespace std;
int main(){
    float c=0, r, a1, n, an=a1, soma,i=0;
    cout<<"1 Progressao Aritmetica \n2 Progressao geometrica\n3 Sair\n";
    cin>>c;
    if (c==1)
    {
    cout<<"quantos termos devera ter a progressao: ";
    cin>>n;
    cout<<"\n qual o primeiro termo da progressao: ";
    cin>>a1;
    cout<<"\n qual a razao da progressao: ";
    cin>>r;
    an=a1+(n-1)*r;
    soma = ((a1+an)*n)/2;
    cout<<"a soma da progressao aritmetica e: " << endl;
    for(int i=a1;i<=an;i=i+r){
        if (i != an)
        {
            cout<< i << "+";
        }
        else{
            cout<<i<<"="<<soma<<endl;
        }
        
    }
    }
    else if (c==2)
    {
        cout<<"quantos termos devera ter a progressao: ";
        cin>>n;
        cout<<"qual o primeiro termo da progressao: ";
        cin>>a1;
        cout<<"qual a razao da progressao: ";
        cin>>r;
        for (i = 1; i <=n; i++)
        { 
            an=a1*pow(r,(i-1));
            soma=soma+an;
            cout<<an<<" ";
        }
        cout<<"\n A soma da progressao e: "<<soma<<endl;
    }    
    else
    return 0;
}