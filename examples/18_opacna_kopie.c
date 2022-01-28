#include <stdio.h>
#include <stdlib.h>

/*18. Máme dvě pole o stejné délce n. Napište funkci, která vezme obě pole o stejné délce a zkopíruje první pole do druhého, ale v opačném pořadí.*/

void nacteni(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter %d. element of area: ", i + 1);
        scanf("%d", &a[i]);
    }
}

void opacna_kopie(int zdroj[], int cil[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cil[i] = zdroj[n - 1 - i];
  }
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
    printf("Zadej pocet prvku v poli: ");
    scanf("%d", &n);

    int a[n],b[n];

    nacteni(a,n);
    opacna_kopie(a, b, n);
    vypis(b,n);

    return 0;
}





