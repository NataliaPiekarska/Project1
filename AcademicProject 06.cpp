//Wczytać współczynniki rzeczywiste a, b, c równania ax2+bx+c=0. Wydrukować wszystkie rozwišzania tego równania.
//Uwzględnić wszystkie możliwe przypadki zerowania się współczynników a, b lub c.

#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char* argv[])
{
    double a,b,c, delta;

    cout << "Prosze podac wspolczynniki a, b i c." << endl;
    cin >> a >> b >> c;

    if (a!=0)
    {
        delta = b*b-4*a*c;

        if (delta>0)
        {
            cout << "Rownanie ma dwa rozwiazania" << endl;
            cout << "x1 = " << (-b + sqrt(delta)) / (2*a) << endl;
            cout << "x2 = " << (-b - sqrt(delta)) / (2*a) << endl;
        }
        else
        {
             if (delta==0)
             {
                 cout << "Rownanie ma jedno rozwiazanie" << endl;
                 cout <<  "x = " << -b / (2*a) << endl;
             }
             else
             {
                if (delta<0)
                cout << "Rownanie nie ma rozwiazan" << endl;
             }
        }
    }
    else
    {
        if (b!=0)
        {
            cout << "Rownanie ma jedno rozwiazanie" << endl;
            cout << -c/b << endl;
        }
        else
        {
            if (c==0)
            {
                cout << "Rownanie ma nieskonczenie wiele rozwiazan" << endl;
            }
            else
            {
                cout << "To rownanie nie ma rozwiazan" << endl;
            }
        }
    }
    return 0;
}
