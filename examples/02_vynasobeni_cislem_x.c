#include <stdio.h>
#include <stdlib.h>

/*2. Napište funkci, která změní pole tak, že každé číslo v poli vynásobí číslem x. Číslo x je vstupním parametrem funkce.*/

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

void vynasobeni_x(int a[],int n,int x)
{
    int i;
    x=3;
    for(i=0;i<n;i++)
    {
        a[i]=x*a[i];
    }
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

    vynasobeni_x(a,n,x);
    vypis(a,n);

    return 0;
}

