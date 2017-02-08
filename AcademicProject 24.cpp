//Z pliku o nazwie podanej przez u¿ytkownika wczytaæ dane do wektorów a i b [n] (n-sta³a).
//Obliczyæ iloczyn skalarny tych wektorów. Wydrukowaæ wektory dane i obliczony iloczyn.

#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

const int n=3;

int main()
{
    string nazwaPliku;
    double a[n],b[n];
    double iloczynSka;

    ifstream plik;

    cout << "Podaj nazwe pliku zawierajacego dane." << endl;
    cin >> nazwaPliku;

    plik.open(nazwaPliku.c_str());

    if (!plik.good())
    {
        cout << "Blad wczytywania pliku.";
        return 1;
    }
    for (int i=0;i<n;i++)
       plik >> a[i];

    for (int i=0;i<n;i++)
       plik >> b[i];

       plik.close();

    cout << "Wektor a:" << endl;
    for (int i=0;i<n;i++)
       cout << a[i] << " ";


    cout << "Wektor b" << endl;
    for (int i=0;i<n;i++)
       cout << b[i] << " ";

    iloczynSka=0;
    for (int i=0;i<n;i++)
        iloczynSka+=a[i]*b[i];

    cout << "Iloczyn skalarny wynosi " << iloczynSka << endl;
    return 0;
}
