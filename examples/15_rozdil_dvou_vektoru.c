#include <stdio.h>
#include <stdlib.h>

/*15. Máme dvě pole celých čísel = vektory. Napište funkci, která vypíše rozdíl těchto dvou vektorů (odečítá se po jednotlivých složkách). Př. pole1: 5, 4, 6 pole2: 1, 5, -9 výstup: 4, -1, 15*/

void nacteni(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter %d. element of area: ", i + 1);
        scanf("%d", &a[i]);
    }
}


void vektor_odcitani(int a[], int b[], int vektory[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		vektory[i] = a[i] - b[i];
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

    int a[n], b[n], vektory[n];

    nacteni(a,n);
    nacteni(b,n);
    vektor_odcitani(a, b, vektory, n);
    vypis(vektory, n);

    return 0;
}





