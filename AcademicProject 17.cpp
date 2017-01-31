//Napisaæ program, który wczytuje znaki, a¿ do napotkania ma³ej litery lub du¿ej.
//Wydrukowaæ informacjê, których znaków wczytano najwiêcej - œredników, kropek, przecinków.


#include <iostream>

using namespace std;

int main()
{
    char znak;
    int licznikSre, licznikKro, licznikPrze;
    licznikSre=0;
    licznikKro=0;
    licznikPrze=0;
    znak='.';


    while ((znak<'A'||znak>'Z')&&(znak<'a'||znak>'z'))
    {
     cout << "Prosze podac znak" << endl;
     cin >> znak;


     if (znak==';')
     licznikSre++;
     if (znak=='.')
     licznikKro++;
     if (znak==',')
     licznikPrze++;
    };

    if (licznikSre>licznikKro&&licznikSre>licznikPrze)
        cout << "Najwiecej wczytano srednikow" << endl;
    if (licznikKro>licznikSre&&licznikKro>licznikPrze)
        cout << "Najwiecej wczytano kropek" << endl;
    if (licznikPrze>licznikSre&&licznikPrze>licznikKro)
        cout << "Najwiecej wczytano przecinkow" << endl;
    return 0;
}
