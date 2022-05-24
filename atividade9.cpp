#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout << " Decimal to ascii for numbers 32 to 255 are:\n\n";

   int col = 1;

   for (int asc_char = 0; asc_char < 128; asc_char++)
   {
    cout << setw(5) << asc_char << setw(3) << hex << setw(3) << asc_char << setw(3) << static_cast<char>(asc_char);
    col++;
    if (col > 7)
    {
        col = 1;
        cout << "\n"; // start new row
    }
   }
   cout << "\n";
}