//Wczytywa� liczby a� do powt�rzenia si� pierwszej z nich.
//Wy�wietli� na ekranie informacj�, ile razy wyst�pi�a sytuacja, �e wpisana liczba by�a wi�ksza od swojego poprzednika.

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

    cout << "Prosze podac liczbe" << endl;
    cin >> aktualna;

    if (aktualna>poprzednia)
    {
    licznik++;
    }
    } while (aktualna!=pierwsza);

    cout << "Wpisana liczba byla wieksza od swojego poprzednika " << licznik << " razy." << endl;

    return 0;
}
