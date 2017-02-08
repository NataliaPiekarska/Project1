//Tablicê A[n][n] (n - sta³a) wype³niæ liczbami losowymi ca³kowitymi z przedzia³u <d, g>
//(wartoœci ca³kowite d i g nale¿y wczytaæ), po czym tablicê wydrukowaæ wierszami,
//a nastêpnie wydrukowaæ sumê elementów nieparzystych le¿¹cych pod g³ówn¹ przek¹tn¹.
//Do losowania liczb ca³kowitych wykorzystaæ funkcjê standardow¹ rand z biblioteki cstdlib.
//Liczbê z podanego przedzia³u okreœla wyra¿enie d+rand()%(g+1-d). Na samym pocz¹tku programu nale¿y wykonaæ instrukcjê srand,
//która zapewni losowoœæ generowania danych przy powtarzaniu wykonywania programu.
//Do sprawdzania parzystoœci wykorzystaæ operator % (liczba x jest parzysta, jeœli x % 2=0).

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
