#include<iostream>

using namespace std;

int main(){
    int i=0;
    
    do{
        i++;
        if(i%2==0){
            cout<<i<<"\n";
        }
    }   while(i <= 100);
    system("pause");
    return 0;
}