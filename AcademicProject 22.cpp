//Z pliku "dane.pas" przepisac do pliku "wyniki.pas" (zwykle pliki tekstowe, tym razem o rozszerzeniu .pas)
//tylko te wiersze, w których dwa ostatnie znaki sa takie same.

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    string wiersz;
    int n;

    ifstream plikWe;
    plikWe.open("dane.pas");

    if (!plikWe.good())
    {
        cout << "Blad otwarcia pliku." << endl;
        return 1;
    }

    ofstream plikWy;
    plikWy.open("wyniki.pas");

    while (!plikWe.eof())
    {
      getline(plikWe,wiersz);
      n=wiersz.size();

      if (n>1)
      if (wiersz[n-2]==wiersz[n-1])
        plikWy << wiersz << endl;
    };

    plikWe.close();
    plikWy.close();

    cout << "Plik zostal utworzony." << endl;

    return 0;
}
