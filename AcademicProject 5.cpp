//Wczytaæ wspó³czynniki rzeczywiste a, b, c równania ax^2+bx+c=0.
//Wydrukowaæ wszystkie rozwi¹zania tego równania, przy za³o¿eniu, ¿e a nie jest równe zeru (nie trzeba tego sprawdzaæ).

#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    float a,b,c,delta;

    cout << "Proszê podaæ wspó³czynniki a, b i c" << endl;
    cin >> a >> b >> c;

    delta = b*b - 4*a*c;

    if (delta==0)
      {
      cout << "Rownanie ma jedno rozwiazanie x=" << -b / (2*a) << endl;
      }
    else
      if (delta>0)
        {
        cout << "Rownanie ma dwa rozwiazania x1=" << (-b - sqrt(delta)) / (2*a) << endl;
        cout << "i x2=" << (-b + sqrt(delta)) / (2*a) << endl;
        }
      else
        {
        cout << "Rownanie nie ma rozwiazan" << endl;
        }

    return 0;
}
