//Wczyta� trzy liczby ca�kowite i wydrukowa� je w kolejno�ci od najwiekszej do najmniejszej.
//Program wyposa�y� w podstawowy interfejs u�ytkownika, tzn. ma si� wykonywa�, dop�ki u�ytkownik nie wybierze opcji koniec.

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
