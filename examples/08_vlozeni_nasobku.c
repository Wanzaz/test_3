#include <stdio.h>
#include <stdlib.h>

/*8. Napiš funkci, vezme číslo x a pole o n prvcích tak, že v každém políčku bude jeden násobek čísla x. Příklad: x=4; pole: 0,4,8,12,...*/


void vypis(int p[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", p[i]);
    }
    printf("\n");
}

void nasobek(int a[], int n, int x)
{
    x=4;
    for(int i=0;i<n;i++)
	a[i] = x*i;
}

int main()
{
    int n, x;
    printf("Zadej pocet prvku v poli: ");
    scanf("%d", &n);


    int a[n];

    nasobek(a, n, x);
    vypis(a,n);

    return 0;
}




