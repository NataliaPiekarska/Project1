//Dla wartoœci x=-0.5, -0.4, ...1.5 drukowaæ odpowiadaj¹ce im wartoœci y, gdzie:
//y = x dla x<=0
//y = 2x dla 0<x<=1
//y = |x-2| dla x>1
//Program napisaæ bez u¿ycia tablic.

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{

double x,y;

for (x=-0.5;x<1.5;x+=0.1)
{
    cout << fixed << setprecision(1);

    if (x<=0)
    {
       y=x;
       cout << "X wynosi: " << x << " a Y wynosi " << y << endl;
    }
    if (x>0)
    {
       y=2*x;
       cout << "X wynosi: " << x << " a Y wynosi " << y << endl;
    }
    if (x>1)
    {
       y=fabs(x-2);
       cout << "X wynosi: " << x << " a Y wynosi " << y << endl;
    }
}
return 0;
}
