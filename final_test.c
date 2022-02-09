#include <stdio.h>
#include <stdlib.h>

/*10. Napiš funkci, která vezme pole o n prvcích a číslo x. Vrátí zpátky, kolikrát se to číslo x v poli vyskytuje: pole: 5, 4, 2, -8, 45, 2, 8, 2 číslo x = 2 výstup: 3×*/


void nacteni(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter %d. element of area: ", i + 1);
        scanf("%d", &a[i]);
    }
}

int kolikrat_x(int a[], int n, int x)
{
    int i, pocet=0;

    for(i=0; i<=n;i++)
    {
        if(a[i]==x)
        {
            pocet++;
        }
    }
    return pocet;
}

int main()
{
    int n, x;
    printf("Zadej pocet prvku v poli: ");
    scanf("%d", &n);
    printf("To cislo, ktere hledas: ");
    scanf("%d", &x);

    int a[n];

    nacteni(a,n);
    printf("Cislo %d bylo nalezeno %d krat", x, kolikrat_x(a,n,x));

    return 0;
}
