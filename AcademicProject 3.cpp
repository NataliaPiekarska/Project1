//Wczytaæ trzy liczby ca³kowite i wydrukowaæ najwiêksz¹ z nich.
//Nie trzeba rozpatrywaæ osobno przypadku, gdy dwie lub trzy liczby mog¹ byæ sobie równe i najwiêksze zarazem - wtedy te¿ nale¿y tak¹ liczbê wydrukowaæ.

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int x,y,z,najwieksza;

    cout << "Proszê podaæ trzy liczby ca³kowite" << endl;
    cin >> x >> y >> z;

    najwieksza=x;

    if (y>najwieksza)
      {
      najwieksza=y;
      }
    if (z>najwieksza)
      {
      najwieksza=z;
      }

    cout << "Najwieksza liczba to " << najwieksza << endl;

    return 0;
}
