#include <iostream>
#include <windows.h>
using namespace std;

int main (){
    int n, a, u=1, p=0, b;
    cout<<"Escolha quantos termos tera a sequencia: ";
    cin>> n;
    cout<<p << "\n" << u << "\n";
    
    for(a=3; a<=n; a++){
        cout<<(u+p)<< endl;
        b=p;
        p=u;
        u=u+p;
    }
    return 0;
}