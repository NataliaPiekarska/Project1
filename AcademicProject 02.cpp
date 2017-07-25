//Wczytac dwie liczby calkowite i wydrukowac wieksza z nich.
//Uwzglednic przypadek, gdy dwie liczby sa sobie rowne i odpowiednio zasygnalizowac to komentarzem.

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
