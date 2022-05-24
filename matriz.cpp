#include <iostream>
#include <windows.h>
#include <time.h>

#define MAX_LINHAS 10
#define MAX_COLUNAS 10

using namespace std;

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    srand(time(NULL));

    int matriz[MAX_LINHAS][MAX_COLUNAS];

    for (int i = 0; i < MAX_LINHAS; i++)
    {
        for (int j = 0; j < MAX_COLUNAS; j++)
        {
            matriz[i][j] = rand() % 100;
        }
    }

    for (int i = 0; i < MAX_LINHAS; i++)
    {
        for (int j = 0; j < MAX_COLUNAS; j++)
        {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}