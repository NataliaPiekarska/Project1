//Wczytać trzy liczby całkowite i wydrukować największa z nich.
//Nie trzeba rozpatrywać osobno przypadku, gdy dwie lub trzy liczby moga być sobie równe i największe zarazem,
//wtedy też należy taka liczbę wydrukować.

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
