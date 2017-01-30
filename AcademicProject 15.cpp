//Wczytywaæ z klawiatury znaki i drukowaæ na ekranie:
//* jesli znak jest cyfr¹
//$ jesli znak jest liter¹
//= jesli znak jest spacj¹
// ! w pozosta³ych przypadkach
//Wczytywanie zakoñczyæ po napotkaniu kropki lub przecinka.

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
