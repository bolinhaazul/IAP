#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    char o;
    int n, c;
    n=127;
    for ( c = 0; c <=127; c++)
    {
        cout<<dec<<c<<" "<<hex<<c<<" "<<o<<endl;
        o++;
    }
    return 0;
}