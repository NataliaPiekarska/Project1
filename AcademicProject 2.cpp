//Wczyta� dwie liczby ca�kowite i wydrukowa� wi�ksz� z nich.
//Uwzgl�dni� przypadek, gdy dwie liczby s� sobie r�wne i odpowiednio sygnalizowa� to komentarzem.

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int x,y;

    cout << "Prosze podac dwie liczby calkowite." << endl;
    cin >> x >> y;

    if (x==y)
      {
      cout << "Liczby sa sobie rowne" << endl;
      }
    else
      if (x>y)
        {
        cout << "Liczba " << x << " jest wieksza." << endl;
        }
      else
        {
        cout << "Liczba " << y << " jest wieksza." << endl;
        }
    return 0;
}
