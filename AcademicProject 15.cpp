//Wczytywa� z klawiatury znaki i drukowa� na ekranie:
//* jesli znak jest cyfr�
//$ jesli znak jest liter�
//= jesli znak jest spacj�
// ! w pozosta�ych przypadkach
//Wczytywanie zako�czy� po napotkaniu kropki lub przecinka.

#include <iostream>

using namespace std;

int main()
{
    char x;

    do
    {
     cout << "Prosze podac znak" << endl;
     cin.get(x);
     cin.ignore();

     if (x>='0'&&x<='9')
     cout << "*" << endl;
     else if ((x>='A'&&x<='Z') || (x>='a'&&x<='z'))
     cout << "$" << endl;
     else if (x==' ')
     cout << "=" << endl;
     else
     cout << "!" << endl;

    } while (x!='.'&&x!=',');
    return 0;
}
