#include <iostream>
#include <windows.h>
using namespace std;
int main(){
    int n, fatorial, i;
    cout<<"Escolha qual o numero devera ser feito o fatorial: ";
    cin>> i;
    n=i;
    fatorial=1;
    if(n==0){
        cout<< "fatorial igual a 0";
    }
    for(i=1;i<=n;i++){
        fatorial = fatorial*i;
    }
    cout<<"o fatorial e: "<<fatorial<<endl;
    return 0;
}