#include <stdio.h>
#include <stdlib.h>

/*25. Napiš funkci, která vezme dvě pole (zdroj, cíl) a do druhého pole dá jen ty prvky z prvního pole, které jsou lichá. Př. zdroj: 5, -2, 3, -7, cíl: 5, 3, -7. Funkce vrací počet prvků ve druhém poli.*/

void nacteni(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter %d. element of area: ", i + 1);
        scanf("%d", &a[i]);
    }
}

int jen_licha(int zdroj[], int cil[], int n)
{
    int j=0;
    for (int i = 0; i < n; i++)
    {
        if (zdroj[i]%2 != 0)
            {
            cil[j] = zdroj[i];
            j++;
            }
    }
    return j;
}

void vypis(int p[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", p[i]);
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Enter a number n: ");
    scanf("%d", &n);

    int a[n], b[n];

    nacteni(a, n);
    //licha(a, b, n); you cannot do this

    int nn = jen_licha(a, b, n);
    vypis(b, nn);

    return 0;
}
