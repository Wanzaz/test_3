#include <stdio.h>
#include <stdlib.h>


void nacteni(int a[], int n) //n = current size of area, a[] = maximal size of area
{
    int i;
    for(i=0;i<n;i++)
    {
      printf("Enter %d. element of area: ", i + 1);
      scanf("%d", &a[i]);
    }
    return 0;
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

