#include <stdio.h>
#include <stdlib.h>

/*21. Napište funkci, která vezme dvě pole o délce n a třetí pole o délce 2*n a vloží za sebou tato dvě pole do toho třetího.*/

void nacteni(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter %d. element of area: ", i + 1);
        scanf("%d", &a[i]);
    }
}


void slouceni_poli(int a[], int b[], int c[], int n)
{
    for(int i=0; i < n; i++)
    {
        c[i] = a[i];
    }

    for(int i=n; i < n*2; i++)
    {
        c[i] = b[i - n];
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
    printf("Enter a number n: ");
    scanf("%d", &n);

    int a[n], b[n], c[n*2];

    nacteni(a, n);
    nacteni(b, n);
    slouceni_poli(a, b, c, n);
    vypis(c, n*2);

    return 0;
}

