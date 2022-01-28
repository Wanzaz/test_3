#include <stdio.h>
#include <stdlib.h>

/*17. Napiš funkci, která vezme pole a číslo x a vypíše všechny indexy, na kterých leží v poli číslo x. Př. pole: 1, 8, 1, 14, 15, 1, 2, číslo: 1, výstup: 0, 2, 5*/

void nacteni(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter %d. element of area: ", i + 1);
        scanf("%d", &a[i]);
    }
}

void vypis_indexu_x(int a[], int n, int x)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            printf("%d ", i);
        }
    }
}


int main()
{
    int n, x;
    printf("Zadej pocet prvku v poli: ");
    scanf("%d", &n);
    printf("Zadej cislo x: ");
    scanf("%d", &x);

    int a[n];

    nacteni(a,n);
    vypis_indexu_x(a, n, x);

    return 0;
}





