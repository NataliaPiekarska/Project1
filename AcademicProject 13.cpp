//Wczytywa� podawane przez u�ytkownika liczby, dop�ki tworz� one ci�g rosn�cy (czyli ka�da nast�pna liczba jest wi�ksza od poprzedniej).
//Wy�wietli� �redni� arytmetyczn� liczb tego rosn�cego ci�gu.


#include <iostream>

using namespace std;

int main()
{
    double aktualna, poprzednia, suma;
    int licznik;

    suma=0;
    licznik=0;

    cout << "Prosze podac liczbe" << endl;
    cin >> aktualna;

    do
    {
    poprzednia = aktualna;
    suma += aktualna;
    licznik++;
    cout << "Prosze podac liczbe" << endl;
    cin >> aktualna;
    } while (aktualna>poprzednia);

    cout << "Srednia arytmetyczna ciagu to " << suma/licznik << endl;

    return 0;
}
