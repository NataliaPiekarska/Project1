//Wczytywa� liczby, a� pierwsza wczytana liczba powt�rzy si� trzy razy. Wydrukowa� ilo�� wczytanych liczb.

#include <iostream>

using namespace std;

int main()
{
    int x, pierwszaLiczba, licznikPierwszej, licznikWszystkich;

    cout << "Prosze padac liczbe" << endl;
    cin >> x;

    pierwszaLiczba=x;
    licznikWszystkich=1;
    licznikPierwszej=1;

    while (licznikPierwszej<3)
    {
        cout << "Prosze podac liczbe" << endl;
        cin >> x;
        licznikWszystkich++;
        if (x==pierwszaLiczba)
        {
             licznikPierwszej++;
        }
    };

    cout << "Wczytano " << licznikWszystkich << " liczb." << endl;

    return 0;
}
