//Wczyta� trzy liczby ca�kowite i wydrukowa� najwi�ksz� z nich.
//Nie trzeba rozpatrywa� osobno przypadku, gdy dwie lub trzy liczby mog� by� sobie r�wne i najwi�ksze zarazem - wtedy te� nale�y tak� liczb� wydrukowa�.

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int x,y,z,najwieksza;

    cout << "Prosz� poda� trzy liczby ca�kowite" << endl;
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
