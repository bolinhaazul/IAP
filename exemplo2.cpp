#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    char c, v[] = {'A', 'E', 'I', 'O', 'U'};
    bool encontrou = false;
    int indice;

    cout << "Digite uma letra: ";
    cin >> c;

    for (int i=0; i<5; i++) {
        if (v[i] == c) {
            encontrou = true;
            indice = i;
        }
    }

    if (encontrou) {
        cout << "Encontrado na posição " << indice;
    } else {
        cout << "Não encontrado no vetor.";
    }

    cout << endl << endl;
    return 0;
}