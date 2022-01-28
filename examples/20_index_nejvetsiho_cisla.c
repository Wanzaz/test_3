#include <stdio.h>
#include <stdlib.h>

/*20. Napiš funkci, která vrátí index největšího čísla v poli.*/

void nacteni(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter %d. element of area: ", i + 1);
        scanf("%d", &a[i]);
    }
}

int index_nejvetsiho_cisla(int p[], int n)
{
    int max = p[0];
    for (int i = 0; i < n; i++)
    {
        if (max < p[i])
        max = i;
    }
    return max;
}

int main()
{
    int n;
    printf("Zadej pocet prvku v poli: ");
    scanf("%d", &n);

    int a[n];

    nacteni(a,n);
    printf("Index nejvetsiho cisla je: %d", index_nejvetsiho_cisla(a, n));

    return 0;
}

