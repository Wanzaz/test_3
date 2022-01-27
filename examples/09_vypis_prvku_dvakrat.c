#include <stdio.h>
#include <stdlib.h>

/*9. Napiš funkci, která vypíše každý prvek pole dvakrát za sebou. Př. pole 5, 4, 7, -9, 0  výstup: 5 5 4 4 7 7 -9 -9 0 0*/


void vypis_dvakrat(int p[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", p[i]);
        printf("%d ", p[i]);
    }
    printf("\n");
}

void nasobek(int a[], int n, int x)
{
    x=4;
    for(int i=0;i<n;i++)
	a[i] = x*i;
}

int main()
{
    int n, x;
    printf("Zadej pocet prvku v poli: ");
    scanf("%d", &n);


    int a[n];

    nasobek(a, n, x);
    vypis_dvakrat(a,n);

    return 0;
}




