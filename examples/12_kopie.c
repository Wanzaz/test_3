#include <stdio.h>
#include <stdlib.h>

/*12. Máme dvě pole o stejné délce n. Napište funkci, která vezme obě pole o stejné délce a zkopíruje první pole do druhého.*/

void nacteni(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter %d. element of area: ", i + 1);
        scanf("%d", &a[i]);
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

void kopie(int zdroj[], int cil[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cil[i] = zdroj[i];
  }
}

int main()
{
    int n;
    printf("Zadej pocet prvku v poli: ");
    scanf("%d", &n);

    int a[n], b[n];

    nacteni(a,n);
    kopie(a,b,n);
    vypis(b, n);

    return 0;
}





