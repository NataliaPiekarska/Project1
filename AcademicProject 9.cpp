//Wczyta� ci�g liczb niezerowych zako�czony zerem. Wydrukowa�:
//-�redni� arytmetyczn� pierwszej i ostatniej liczby tego ci�gu;
//-�redni� arytmetyczn� dodatnich liczb tego ci�gu;
//albo odpowiedni komentarz, gdy kt�rej� ze �rednich nie da si� policzy�.

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
