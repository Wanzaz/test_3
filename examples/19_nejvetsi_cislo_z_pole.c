#include <stdio.h>
#include <stdlib.h>

/*19. Napiš funkci, která vrátí největší číslo v poli.*/

void nacteni(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter %d. element of area: ", i + 1);
        scanf("%d", &a[i]);
    }
}

int nejvetsi_cislo(int p[], int n)
{
    int max = p[0];
    for (int i = 0; i < n; i++)
    {
        if (max < p[i])
            max = p[i];
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
    printf("Nejvetsi cislo je: %d", nejvetsi_cislo(a, n));

    return 0;
}


