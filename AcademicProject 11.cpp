//Wczytywać znaki aż do napotkania dwu występujących po sobie kropek. Wydrukować ilość wczytanych znaków łącznie z tymi kropkami.

#include <iostream>

using namespace std;

int main()
{
    char znak1, znak2;
    int licznikZnakow;

    licznikZnakow=0;

    znak1=''

    do
    {
        znak2=znak1

        cout << "Prosze podac znak" << endl;
        cin >> znak1;

        licznikZnakow++;

    } while (znak1!='.'||znak2!='.');

    cout << "Ilosc wszystkich znakow to " << licznikZnakow << endl;

    return 0;
}
