//Wczyta� wsp�czynniki rzeczywiste a i b r�wnania ax+b=0. Wydrukowa� rozwi�zanie tego r�wnania (czyli warto�� x).

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    double a,b,x;

    cout << "Prosze podac wspolczynniki a i b" << endl;
    cin >> a >> b;

    x=-b/a;

    cout << "Wynik rownania ax+b=0 to " << x << endl;

    return 0;
}
