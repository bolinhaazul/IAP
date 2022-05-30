#include <iostream>
using namespace std;
int main(){
    int n,a=0;
    cout<<"qual interruptor sera acionado? 1 ou 2? ";
    cin>>a;
    if (a==1)
    {
        cout<<"digite quantas vezes o interruptor sera acionado: "<<endl;
        cin>>n;
        if (n%2==0)
        {
            cout<<"Ambas as lampadas estao apagadas";            
        }
        else if (n%2!=0)
        {
            cout<<"lampada 1 esta acesa e lampada 2 permanece apagada";
        }
    }
    if (a==2)
    {
        cout<<"digite quantas vezes o interruptor sera acionado "<<endl;
        cin>>n;
        if (n%2==0)
        {
            cout<<"ambas as lampadas estao apagadas";
        }
        else if (n%2!=0)
        {
            cout<<"ambas as lampadas estao acesas";
        }        
    }
    return 0;
}