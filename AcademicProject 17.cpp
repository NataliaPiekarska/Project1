//Napisa� program, kt�ry wczytuje znaki, a� do napotkania ma�ej litery lub du�ej.
//Wydrukowa� informacj�, kt�rych znak�w wczytano najwi�cej - �rednik�w, kropek, przecink�w.


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
