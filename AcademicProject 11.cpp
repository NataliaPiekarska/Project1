//Wczytywać znaki aż do napotkania dwu występujących po sobie kropek. Wydrukować ilość wczytanych znaków łącznie z tymi kropkami.

#include <iostream>

using namespace std;

int main()
{
    int licznikK=0;
    int licznikZ=0;
    char z;

    cout << "Prosze podac znak, program zatrzyma sie po podaniu dwoch kropek" << endl
        
    do
    {
    cin >> z;
    licznikZ++;
    if (z=='.')
        licznikK++;
    } while (licznikK!=2);

    cout << "Liczna wszystkich znakow to " << licznikZ << endl;
    
    return 0;
}

