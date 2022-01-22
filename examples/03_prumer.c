#include <stdio.h>
#include <stdlib.h>

/*3. Napiš funkci, která vrátí průměr čísel v poli.*/

void vypis(int a[], int n)
{
  int i;
  for(i=0;i<n;i++)
  {
    printf("%d, ", a[i]);
  }
  printf("\n");
}

void vypln_cislem(int a[],int n, int num)
{
    int i;
    for(i=0;i<n;i++)
    {
        a[i]=num;
    }
}

int prumer(int a[],int n)
{
    int i, soucet=0;
    for(i=0;i<n;i++)
    {
        soucet += a[i];
    }
    return soucet/i;
}

int main()
{
    int n, num, x=3;
    printf("Zadej pocet prvku v poli: ");
    scanf("%d", &n);
    printf("Zadej cislo, kterym bude pole vyplneno: ");
    scanf("%d", &num);


    int a[n];

    vypln_cislem(a,n,num);
    vypis(a,n);

    printf("Prumer pole je %d", prumer(a,n));

    return 0;
}

