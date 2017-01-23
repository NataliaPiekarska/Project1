#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int x,y;

    cout << "Prosze podac dwie liczby calkowite." << endl;
    cin >> x >> y;

    if (x>y)
    {
    cout << "Liczba " << x << " jest wieksza." << endl;
    }
    else
    {
    cout << "Liczba " << y << " jest wieksza." << endl;
    }
    return 0;
}
