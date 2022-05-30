#include <iostream>
#include<string.h>
using namespace std;
int main(){
    char str[100], letra = 'f';
    int n=0;
    cout<<"digite a frase: \n";
    gets(str);
    for (int i = 0; i <=100; i++)
    {
        if (str[i]==letra)
        {
            n++;
        }
    }
    n=n-1;
    cout<<"numero de vezes que a letra "<<letra<<" aparece e "<<n<<endl;
    return 0;
}