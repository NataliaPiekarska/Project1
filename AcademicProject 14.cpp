//Wczytywac liczby az do powtorzenia sie pierwszej z nich.
//Wyswietlic na ekranie informacje, ile razy wystapila sytuacja, ze wpisana liczba byla wieksza od swojego poprzednika.

#include <iostream>

using namespace std;

int main()
{
    int aktualna, pierwsza, poprzednia, licznik;

    licznik=0;

    cout << "Prosze podac liczbe" << endl;
    cin >> aktualna;

    pierwsza = aktualna;

    do
    {
    poprzednia = aktualna;
    cin >> aktualna;

    if (aktualna>poprzednia)
    {
    licznik++;
    }
    } while (aktualna!=pierwsza);

    cout << "Wpisana liczba byla wieksza od swojego poprzednika " << licznik << " razy." << endl;

    return 0;
}
