//Wczytać trzy liczby całkowite i wydrukować największš z nich.
//Nie trzeba rozpatrywać osobno przypadku, gdy dwie lub trzy liczby mogš być sobie równe i największe zarazem - wtedy też należy takš liczbę wydrukować.

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int x,y,z,najwieksza;

    cout << "Proszę podać trzy liczby całkowite" << endl;
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
