//Wczytać współczynniki rzeczywiste a i b równania ax+b=0. Wydrukować rozwiązanie tego równania (czyli wartość x).

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    float a,b,x;

    cout << "Prosze podac wspolczynniki a i b." << endl;
    cin >> a >> b;

    if (a==0)
      {
       if (b==0)
         {
         cout << "Kazdy x jest rozwiazaniem tego rownania." << endl;
         }
       else
         {
         cout << "To rownanie nie ma rozwiazan." << endl;
         }
      }    
    else
      {
      x=-b/a;
      cout << "Wynik rownania ax+b=0 to " << x << endl;
      }
    
    return 0;
}
