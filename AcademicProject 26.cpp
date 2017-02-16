//Z pliku o nazwie "dane.txt" wczytac dane calkowite do tablicy A[w][k] (w,k - stale). Wydrukowac tablice wierszami.
//Dla kazdej kolumny, która zawiera choc jedno zero, znalezc i wydrukowac wartosc najwieksza.
//Uwaga: Wyniki drukowac pod kolumnami, którym odpowiadaja.

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

const int w=4;
const int k=5;

int main(int argc, char* argv[])
{
    int A[w][k];

    ifstream plik;
    plik.open("dane.txt");

    if (!plik.good())
    {
        cout << "Blad wczytywania pliku." << endl;
        return 1;
    }

    for (int i=0;i<w;i++)
        for (int j=0;j<k;j++)
        plik >> A[i][j];


    plik.close();

     for (int i=0;i<w;i++)
        for (int j=0;j<k;j++)
        cout << A[i][j] << " ";

    bool zawieraZero;
    int maks;

    for (int j=0;j<k;j++)
    {
    zawieraZero=false;
    maks=A[0][j];
       for (int i=0;i<w;i++)
       {
            if (A[i][j]>maks)
            maks=A[i][j];
            if (A[i][j]==0)
            zawieraZero=true;

       }
       if (zawieraZero)
          cout << maks;
       else
          cout << "nie zawiera zera";
    }


    return 0;
}
