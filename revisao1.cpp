#include <iostream>
#include <time.h>
#define numl 5
#define numc 5 
using namespace std;

int main(){   
    srand(time(0));    
    int m[numl][numc], i, j, menor, maior;
    for ( i = 0; i < numl; i++)
    {
        for ( j = 0; j < numc; j++)
        {
            m[i][j]= rand();
        }
    }
    maior=m[0][0];
    menor=m[0][0];
    for ( i = 0; i < numl; i++)
    {
        for ( j = 0; j < numc; j++)
            {
                if (m[i][j]>maior)
                {
                    maior=m[i][j];
                }    
                    else if (m[i][j]<menor)
                    {
                        menor=m[i][j];
                    }
                }
                
            }   
    cout<<"o maior numero dessa matriz e: "<<maior<< endl <<"\nO menor numero dessa matriz e: "<< menor << endl;
    return 0;
    }