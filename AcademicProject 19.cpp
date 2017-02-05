//Wczytać n liczb całkowitych wpisując je do tablicy A[n] następująco:
//liczby jednocyfrowe wpisywać od początku tablicy
//liczby dwucyfrowe wpisywać od końca tablicy
//inne liczby powinny wypełnić pozostałą część tablicy.

#include <iostream>
#include <cstdlib>

using namespace std;

const int n = 8;

int main()
{

    int A[n];
    int i1, i2, ip, i, liczba;

    i1=ip=0;
    i2=n-1;

    for (i=0;i<n;i++)
    {
      cin >> liczba;

      if (abs(liczba)<=9)
      {
      A[ip] = A[i1];
      ip++;
      A[i1] = liczba;
      i1++;
      }
      else if (abs(liczba)<=99)
      {
      A[i2]=liczba;
      i2--;
      }
      else
      {
      A[ip]=liczba;
      ip++;
      }
    }

    for (i=0;i<n;i++)
       cout << A[i] << " ";

    return 0;
}
