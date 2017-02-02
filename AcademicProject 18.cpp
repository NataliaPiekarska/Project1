//Wczytywaæ liczby ca³kowite, w parzystych wierszach od pocz¹tku do koñca,
//zaœ w wierszach nieparzystych - na odwrót.
//Wpisywaæ je do tablicy A[w][k] (w, k -sta³e).
//Na koniec wydrukowaæ wierszami.

#include <iostream>

using namespace std;

const int w = 4;
const int k = 4;

int main()
{
    int A [w][k];
    int i,j;

    for (i=0; i<w; i++ )
    {
        if (i%2==0)
        for (j=0; j<k; j++)
        cin >> A [i][j];
        else
        for (j=k-1;j>=0;j--)
        cin >> A [i][j];
    }

    for (i=0; i<w; i++ )
    {
       for (j=0; j<k; j++)
       cout << A[i][j];
    }
    return 0;
}
