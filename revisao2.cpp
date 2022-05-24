#include <iostream>
#include <math.h>
#define PI 3.14159265
using namespace std;

int main(){
    int ang;
    cout<<"digite o valor do angulo desejado: ";
    cin>> ang;
    cout<< endl << "o seno desse angulo e: "<<sin(ang*PI/180);
    cout<<"\no cosseno desse angulo e: "<<cos(ang*PI/180);
    cout<<"\na tangente desse angulo e: "<<tan(ang*PI/180);
    return 0;
}