//Z pliku o nazwie podanej przez uzytkownika przepisac do pliku "wybrane.txt"
//n poczatkowych wierszy tego pliku oraz te sposrod nastepnych wierszy,
//które zawieraja choc jedna cyfre; n jest wartoscia podana przez uzytkownika
//(jesli w pliku jest mniej niz n wierszy, przepisac je wszystkie).

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream plik;
    string nazwaPliku;

    cout << "Prosze podac nazwe pliku z tekstem." << endl;
    cin >> nazwaPliku;

    plik.open(nazwaPliku.c_str());

    if (!plik.good())
    {
        cout << "Blad otwarcia pliku" << endl;
        return 1;
    }

    string wiersz;
    int n;

    cout << "Prosze podac liczbe wierszy do przepisania: " << endl;
    cin >> n;

    ofstream plik2;
    plik2.open("wybrane.txt");

    while (!plik.eof())
    {
        if (n>0)
        {
        getline (plik, wiersz);
        plik2 << wiersz;
        n--;
        }
        else

        for (int i=0; i<wiersz.size(); i++)
            if (wiersz[i]>=0 && wiersz[i]<=9)
            {
            getline (plik,wiersz);
            plik2 << wiersz;
            }
    }

    return 0;
}
