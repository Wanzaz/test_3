#include <stdio.h>
#include <stdlib.h>

/*4. Napiš funkci, která prohodí první a poslední prvek v poli.*/

void vypis(int a[], int n)
{
  int i;
  for(i=0;i<n;i++)
  {
    printf("%d, ", a[i]);
  }
  printf("\n");
}

void nacteni(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
      printf("Enter %d. element of area: ", i + 1);
      scanf("%d", &a[i]);
    }
}

void vymena(int a[], int n)
{
    int pom;
    pom = a[0];
    a[0] = a[n - 1];
    a[n - 1] = pom;
}



int main()
{
    int n;
    printf("Zadej pocet prvku v poli: ");
    scanf("%d", &n);

    int a[n];

    nacteni(a,n);
    vymena(a,n);
    vypis(a,n);

    return 0;
}

