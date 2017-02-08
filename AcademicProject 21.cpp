//Tablic� A[n][n] (n - sta�a) wype�ni� liczbami losowymi ca�kowitymi z przedzia�u <d, g>
//(warto�ci ca�kowite d i g nale�y wczyta�), po czym tablic� wydrukowa� wierszami,
//a nast�pnie wydrukowa� sum� element�w nieparzystych le��cych pod g��wn� przek�tn�.
//Do losowania liczb ca�kowitych wykorzysta� funkcj� standardow� rand z biblioteki cstdlib.
//Liczb� z podanego przedzia�u okre�la wyra�enie d+rand()%(g+1-d). Na samym pocz�tku programu nale�y wykona� instrukcj� srand,
//kt�ra zapewni losowo�� generowania danych przy powtarzaniu wykonywania programu.
//Do sprawdzania parzysto�ci wykorzysta� operator % (liczba x jest parzysta, je�li x % 2=0).

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>

using namespace std;

const int n=4;

int main()
{

int A[n][n];
int d,g,suma;

cout << "Prosze podac przedzial liczb miedzy d a g." << endl;
cin >> d >> g;

srand(time(0));

for (int i=0;i<n;i++)
    for (int j=0;j<n;j++)
    A[i][j]=d+rand()%(g+1-d);

for (int i=0;i<n;i++)
{
    for (int j=0;j<n;j++)
    cout << setw(5) << A[i][j];
    cout << endl;

};
suma=0;
for (int i=1;i<n;i++)
{
    for (int j=0;j<i;j++)
    if (A[i][j] %2 !=0)
    suma+=A[i][j];
};

cout << "Suma liczb nieparzystych pod glowna przekatna wynosi: " << suma << endl;


    return 0;
}
