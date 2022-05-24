#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;
int main{
    srand(time(NULL));
    int v[10];
    bool repeated;
    for (int i=0; i<10; i++){
       do{
           repeated = false;
           v[i] = rand()%100;
           for(int j=0; j<1; j++){
               if (v[i] == v[j]){
                   repeated = true;
                   cout << v[j] << "\nrepetido \n";
               }
           }
       }while (repeated);
       
   } 
   cout << endl << endl;
   return 0;
}