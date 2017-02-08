//Wczytać znaki do tablicy A[w][k] (w,k - stałe).
//Wydrukować wierszami tablicę, po czym wyznaczyć i wydrukować numer kolumny, w której jest najwięcej małych liter.

#include <cstdlib>
#include <iostream>

using namespace std;

const int w = 3;
const int k = 4;

int main(int argc, char* argv[])
{
  char A[w][k];
  int tablicaMalych[k];

  int iloscMalych;

  cout << "Napisz " << w*k << " dowolnych znakow"  << endl;

  for (int i = 0; i < w; i++)
    for (int j = 0; j < k; j++)
      cin >> A[i][j];

  cout << "Tablica zawierajaca wczytane znaki\n";
  for (int i = 0; i < w; i++)
  {
    for (int j = 0; j < k; j++)
      cout << A[i][j] << " ";
      cout << endl;
  };


  for (int j = 0; j < k; j++)
  {
    tablicaMalych[j] = 0;
    for (int i = 0; i < w; i++)
      if (A[i][j]>='a' && A[i][j]<='z')
        tablicaMalych[j]++;
  };

  iloscMalych = tablicaMalych[0];
  for (int j = 1; j < k; j++)
    if (tablicaMalych[j] > iloscMalych)
      iloscMalych = tablicaMalych[j];

  if (iloscMalych == 0)
    cout << "w tablicy w ogole nie ma malych liter\n";
  else
  {
    cout << "maksymalna ilosc malych liter rowna " << iloscMalych << " wystapila";
    cout << " w nastepujacych kolumnie/kolumnach" << endl;
    for (int j = 0; j < k; j++)
      if (tablicaMalych[j] == iloscMalych)
        cout << j+1 << "  ";
  };

  cout << endl;
  return 0;
}
