//Wczytać cišg liczb dodatnich zakończony liczbš niedodatniš.
//Wydrukować największš liczbę tego cišgu.

#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int x, najLiczba;

    cout << "Prosze podac liczbe" << endl;
    cin >> x;
    najLiczba=x;

    while (x>0)
    {
      cout << "Prosze podac liczbe" << endl;
      cin >> x;
      if (x>najLiczba)
        najLiczba=x;
    };

    cout << "Najwieksza liczna to " << najLiczba << endl;

    return 0;
}
