#include <stdio.h>
#include <stdlib.h>

/*1. Napiš funkci, která do všech prvků pole vloží číslo x.*/

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

int main()
{
    int n, num;
    printf("Zadej pocet prvku v poli: ");
    scanf("%d", &n);
    printf("Zadej cislo, kterym bude pole vyplneno: ");
    scanf("%d", &num);


    int a[n];


    vypln_cislem(a,n,num);
    vypis(a,n);

    return 0;
}

