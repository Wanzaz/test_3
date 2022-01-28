#include <stdio.h>
#include <stdlib.h>

/*24. Napiš funkci, která vezme dvě pole (zdroj, cíl) a do druhého pole dá jen ty prvky z prvního pole, které jsou kladné. Př. zdroj: 5, -2, 3, -7, cíl: 5, 3. Funkce vrací počet prvků ve druhém poli.*/

void nacteni(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter %d. element of area: ", i + 1);
        scanf("%d", &a[i]);
    }
}

int jen_kladna(int zdroj[], int cil[], int n)
{
    int j=0;
    for (int i = 0; i < n; i++)
    {
        if (zdroj[i] > 0)
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
    //jen_kladna(a, b, n); you cannot do this

    int nn = jen_kladna(a, b, n);
    vypis(b, nn);

    return 0;
}

