/*Wczytaæ ci¹g n punktów - par (x,y), gdzie n - sta³a, do wektora rekordów, po czym zamieniæ miejscami punkt najdalszy punktowi (0,0)
z punktem najbli¿szym punktowi (0,0).
Przyj¹æ dla uproszczenia, ¿e jest tylko jeden punkt najdalszy i tylko jeden punkt najbli¿szy.*/


#include <iostream>
#include <cmath>

using namespace std;

const int n=5;

struct SPunkt
{
    int x,y;
};

int main()
{
    SPunkt P[n];
    SPunkt PZamienny;

    int odl_min, odl_max, odl;

    int i_max, i_min;

    for (int i=0;i<n;i++)
        cin >> P[i].x >> P[i].y;

    //indeksy
    i_max = 0;
    i_min = 0;

    //odleglosci
    odl_min = sqrt(P[0].x*P[0].x + P[0].y*P[0].y);
    odl_max = odl_min;

    cout << "Punkty przed zamiana:\n";
    for (int i = 0; i < n; i++)
    cout << " Punkt " << i << " : " << P[i].x << ", " << P[i].y << endl;

    cout << endl << endl;

    for (int i=1;i<n;i++)
    {
      odl = sqrt(P[i].x*P[i].x + P[i].y*P[i].y);

       if (odl<odl_min)
       {
         i_min=i;
         odl_min=odl;
       }
       else if (odl>odl_max)
       {
         i_max=i;
         odl_max=odl;
       }
    }

    //zamiana punktow miejscami
    if (i_max!=i_min)
    {
      PZamienny=P[i_max];
      P[i_max]=P[i_min];
      P[i_min]=PZamienny;
    };


    cout << "Punkty po zamianie:\n";
    for (int i = 0; i < n; i++)
    cout << " Punkt " << i << " : " << P[i].x << ", " << P[i].y << endl;

    return 0;
}
