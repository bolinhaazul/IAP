#include <iostream>

using namespace std;

int main()
{
    int ano;
    cout << "digite um ano:";
    cin >> ano;
    if(ano%4==0){
        cout<<"esse ano e bissexto";
    }
    else if(ano%100==0){
        cout<<"esse ano e bissexto";
    }
    else if(ano%400==0){
        cout<<"esse ano e bissexto";
    }
    else{
        cout<<"esse ano nao e bissexto";
    }
    return 0;

}