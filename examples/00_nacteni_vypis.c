#include <stdio.h>
#include <stdlib.h>

/*0. Funkce pro výpis a načtení n čísel do pole.*/

void nacteni(int a[], int n) //n = current size of area, a[] = maximal size of area
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

int main()
{
    int n;
    printf("Zadej pocet prvku v poli: ");
    scanf("%d", &n);


    int a[n];

    nacteni(a,n);
    vypis(a,n);

    return 0;
}
