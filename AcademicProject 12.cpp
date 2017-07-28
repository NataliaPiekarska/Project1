//Wczytywac ciag liczb calkowitych dodatnich az do napotkania liczby niedodatniej. Dla kazdej z nich drukowac:
//1 - dla liczb jednocyfrowych
//2 - dla liczb dwucyfrowych
//3 -dla liczb trzycyfrowych
//4 - dla liczb czterocyfrowych
//555 - dla pozostalych.

#include <iostream>

using namespace std;

int main()
{
    int x;

    cout << "Prosze podac liczbe calkowita" << endl;
    cin >> x;

    while (x>0)
    {
    if (x<10)
    cout << "1" << endl;
    else if (x<100)
    cout << "2" << endl;
    else if (x<1000)
    cout << "3" << endl;
    else if (x<10000)
    cout << "4" << endl;
    else
    cout << "555" << endl;

    cout << "Prosze podac liczbe calkowita" << endl;
    cin >> x;
    };

    return 0;
}
