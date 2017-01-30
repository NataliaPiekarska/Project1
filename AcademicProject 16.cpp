//Wczytaæ trzy liczby ca³kowite i wydrukowaæ je w kolejnoœci od najwiekszej do najmniejszej.
//Program wyposa¿yæ w podstawowy interfejs u¿ytkownika, tzn. ma siê wykonywaæ, dopóki u¿ytkownik nie wybierze opcji koniec.

#include <iostream>

using namespace std;

int main()
{
    int a,b,c,t;
    char x;

    x='n';

    while (x=='n'||x=='N')
    {
    cout << "Prosze podac trzy liczby" << endl;
    cin >> a >> b >> c;

    if (b>a)
    {
    t=b;
    b=a;
    a=t;
    }
    if (c>b)
    {
     t=b;
     b=c;
     c=t;
    }
    if (c>a)
    {
     t=a;
     a=c;
     c=t;
    }
    cout << a <<" "<< b <<" "<< c << endl;
    cout << "Zakonczyc prace programu?" << endl;
    cout << "Prosze wybrac t (tak) lub n (nie)." << endl;
    cin >> x;
    };

    return 0;
}
