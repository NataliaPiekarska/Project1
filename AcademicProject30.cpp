/*Do wektora o n elementach (n - sta³a) wczytaæ dane o samochodach postaci (rocznik, cena, marka) jako pola rekordów.
Wydrukowaæ cenê najstarszego samochodu (lub pierwszego napotkanego spoœród kilku najstarszych)
i markê najdro¿szego samochodu (lub pierwszego napotkanego spoœród kilku najdro¿szych).*/

#include <iomanip>
#include <iostream>

using namespace std;

const int n  = 3;

struct SSamochod
{
    int rocznik;
    int cena;
    string marka;
};

int main()
{
    SSamochod Auta[n];

    for (int i=0;i<n;i++)
    {
        cout << "Podaj marke" << endl;
        cin >> Auta[i].marka;
        cout << "Podaj rocznik" << endl;
        cin >> Auta[i].rocznik;
        cout << "Podaj cena" << endl;
        cin >> Auta[i].cena;

    }
        cout << endl << endl;

    for (int i=0;i<n;i++)
    {
        cout << "Marka" << " ";
        cout << Auta[i].marka << endl;
        cout << "Rocznik" << " ";
        cout << Auta[i].rocznik << endl;
        cout << "Cena" << " ";
        cout << Auta[i].cena << endl;

        cout << endl << endl;
    }

        //indeksy
        int i_rocznik = 0;
        int i_cena = 0;

        for (int i=1; i<n;i++)
        {
            if (Auta[i].cena>Auta[i_cena].cena)
            {
             i_cena=i;
            }
            if (Auta[i].rocznik>Auta[i_rocznik].rocznik)
            {
             i_rocznik=i;
            }
        }

        cout << "Najstarszy rocznik:" << Auta[i_rocznik].rocznik << endl;
        cout << "Najwyzsza cena: " << Auta[i_cena].cena << endl;

    return 0;
}
