//Wczytywaæ podawane przez u¿ytkownika liczby, dopóki tworz¹ one ci¹g rosn¹cy (czyli ka¿da nastêpna liczba jest wiêksza od poprzedniej).
//Wyœwietliæ œredni¹ arytmetyczn¹ liczb tego rosn¹cego ci¹gu.


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
