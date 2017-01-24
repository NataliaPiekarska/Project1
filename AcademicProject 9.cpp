//Wczytaæ ci¹g liczb niezerowych zakoñczony zerem. Wydrukowaæ:
//-œredni¹ arytmetyczn¹ pierwszej i ostatniej liczby tego ci¹gu;
//-œredni¹ arytmetyczn¹ dodatnich liczb tego ci¹gu;
//albo odpowiedni komentarz, gdy którejœ ze œrednich nie da siê policzyæ.

#include <iostream>

using namespace std;

int main()
{
    double x, pierwsza, sumaPlus, liczbaPlus;

    cout << "Prosze podac liczbe" << endl;
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
      cout << "Prosze podac liczbe" << endl;
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
