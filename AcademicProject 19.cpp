//Wczytać n liczb całkowitych wpisując je do tablicy A[n] następująco:
//liczby jednocyfrowe wpisywać od początku tablicy
//liczby dwucyfrowe wpisywać od końca tablicy
//inne liczby powinny wypełnić pozostałą część tablicy.

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{

     int n;
     int liczba;
     int poczatek=0, srodek=0;

     cout << "Ile elementow ma zawierac tablica?" << endl;
     cin >> n;

     int koniec =n-1;
     int A [n];

     cout << "Prosze podac te elementy" << endl;

     for (int i=0;i<n;i++)
     {
     cin >> liczba;

     if (abs(liczba)<=9)
     {
     A[srodek]=A[poczatek];
     srodek++;
     A[poczatek]=liczba;
     poczatek++;
     }
     else if (abs(liczba)<=99)
     {
      A[koniec]=liczba;
     koniec--;
     }
     else
     {
     A[srodek]=liczba;
     srodek++;
     }

     }

     for (int i=0;i<n;i++)
     cout << A[i] << " ";
    

    return 0;
}
