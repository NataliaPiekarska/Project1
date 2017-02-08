//Wczytywać ciąg liczb aż do napotkania zera. Wydrukować ilość liczb ujemnych i ilość liczb dodatnich w tym ciągu.

#include <iostream>

using namespace std;

int main()
{
    int x,liczPlus,liczMinus;

    liczMinus=0;
    liczPlus=0;

    do
    {
       cout << "Prosze podac liczbe" << endl;
       cin >> x;

       if (x>0)
       liczPlus++;
       else if (x<0)
       liczMinus++;
    }
    while (x!=0);
    cout << "Podano " << liczPlus << " liczb dodatnich i " << liczMinus << " liczb ujemnych." << endl;

    return 0;
}
