#include <iostream>
using namespace std;
int main(){
    int m[3][3], v[3];
    cout<<"insira os 9 valores da matriz: ";
    cin>>m[1][1]>>m[1][2]>>m[1][3]>>m[2][1]>>m[2][2]>>m[2][3]>>m[3][1]>>m[3][2]>>m[3][3];
    v[1]=m[1][1]+m[2][1]+m[3][1];
    v[2]=m[1][2]+m[2][2]+m[3][2];
    v[3]=m[1][3]+m[2][3]+m[3][3];
    cout<<v[1]<<" "<<v[2]<<" "<<v[3]<< " ";
    return 0;
}