#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int v[11];

    for (int i=0; i<=10; i++) {
        v[i] = i + 5; // 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15
        cout << v[i] << " ";
    }

    cout << endl << endl;
    return 0;
}