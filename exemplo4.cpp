#include <iostream>
#include <windows.h>
#include <time.h>
#define TAM 100
 
using namespace std;
 
int main() {
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    srand(time(NULL));

    int v[TAM], vi[TAM], total_impares = 0, vp[TAM], total_pares = 0;

    for (int i=0; i<TAM; i++) {
        v[i] = rand()%50;
        if (v[i] % 2 != 0) {
            vi[total_impares] = v[i];
            total_impares++;
        } else {
            vp[total_pares] = v[i];
            total_pares++;
        }
    }

    for (int i=0; i<TAM; i++) {
        cout << v[i] << " ";
    }
    cout << endl << endl;
    for (int i=0; i<total_impares; i++) {
        cout << vi[i] << " ";
    }
    cout << endl << endl;
    cout << "Total de números ímpares: " << total_impares;
    cout << endl << endl;

    for (int i=0; i<total_pares; i++) {
        cout << vp[i] << " ";
    }

    cout << "\n\nTotal de números pares: " << total_pares;
    cout << endl << endl;
    return 0;
}