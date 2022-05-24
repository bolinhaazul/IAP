#include <iostream>
#include <windows.h>
#include <time.h>
 
using namespace std;
 
int main() {
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    srand(time(NULL));
    int total = 0, v[10];
    bool repeated;

    for (int i=0; i<10; i++) {
        do {
            repeated = false;
            v[i] = rand()%100;
            for (int j=0; j<i; j++) {
                if (v[i] == v[j]) {
                    total++;
                    repeated = true;
                    cout << v[j] << " repetido com i = " << i << endl;
                }
            }
        } while (repeated);
    }

    for (int i=0; i<10; i++) {
        cout << v[i] << " ";
    }
    cout << "\n\nTotal de repetições: " << total;
    cout << endl << endl;
    return 0;
}