//Wczytać ciąg liczb niezerowych zakończony zerem. Wydrukować:
//-średnią arytmetyczną pierwszej i ostatniej liczby tego ciągu;
//-średnią arytmetyczną dodatnich liczb tego ciągu;
//albo odpowiedni komentarz, gdy którejś ze średnich nie da się policzyć.

#include <iostream>

using namespace std;

int main()
{
    double x, pierwsza, sumaPlus, liczbaPlus;

    cout << "Prosze podac ciag liczb zakonczony zerem" << endl;
    cin >> x;

    pierwsza=x;
    sumaPlus=0;
    liczbaPlus=0;

    while (x!=0)
    {
      if (x>0)
      {
          sumaPlus+=x;
          liczbaPlus++;
      }
      cin >> x;
    }

//ostatnia liczba zawsze wynosi zero
    if (pierwsza==0)
    {
        cout << "Podano tylko zero..." << endl;
    }
    else
    {
        cout << "Srednia arytmetyczna pierwszej i ostatniej liczby wynosi " << (pierwsza+x)/2 << endl;
    }
    if (pierwsza==0)
     {
        cout << "Nie mozna obliczyc sredniej arytmetycznej liczb dodatnich" << endl;
     }
    else
    {
        cout << "Srednia arytmetyczna liczb dodatnich wynosi " << sumaPlus/liczbaPlus << endl;
    }

    return 0;
}
