//Wczytywa� z klawiatury kolejne wiersze, a� do napotkania wiersza zaczynaj�cego si� kropk�,
//i przepisywa� do pliku o nazwie podanej przez u�ytkownika tylko wiersze o d�ugo�ci wi�kszej ni� 5 znak�w.

#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string wiersz, nazwaPliku;

    ofstream plikOryginalny;

    cout << "Prosze podac nazwe pliku." << endl;
    cin >> nazwaPliku;

    plikOryginalny.open(nazwaPliku.c_str());

    cout << "Prosze wypisac dowolna liczne wierszy." << endl;
    cout << "Ostatni powinien byc zakonczony kropka." << endl;

    do
    {
       getline(cin,wiersz);

       if (wiersz.size()>5)
       plikOryginalny << wiersz << endl;
    } while (wiersz.size()==0||wiersz[0]!='.');


    plikOryginalny.close();

    return 0;
}
