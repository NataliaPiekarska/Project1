//Wczytywa� ci�g liczb a� do napotkania zera. Wydrukowa� ilo�� liczb ujemnych i ilo�� liczb dodatnich w tym ci�gu.

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
