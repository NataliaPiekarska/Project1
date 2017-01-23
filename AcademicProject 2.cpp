//Wczytaæ dwie liczby ca³kowite i wydrukowaæ wiêksz¹ z nich.
//Uwzglêdniæ przypadek, gdy dwie liczby s¹ sobie równe i odpowiednio sygnalizowaæ to komentarzem.

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
