//Wczytywaæ ci¹g liczb a¿ do napotkania zera. Wydrukowaæ iloœæ liczb ujemnych i iloœæ liczb dodatnich w tym ci¹gu.

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
