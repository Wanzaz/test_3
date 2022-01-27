#include <stdio.h>
#include <stdlib.h>

/*11. Máme dvě pole celých čísel = vektory. Napište funkci, která vypíše součet těchto dvou vektorů (sčítá se po jednotlivých složkách). Př. pole1: 5, 4, 6 pole2: 1, 5, -9 výstup: 6, 9, -3*/

void nacteni(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter %d. element of area: ", i + 1);
        scanf("%d", &a[i]);
    }
}


void vektor(int a[], int b[], int vektory[], int n)
{
	int i, soucet=0;
	for(i=0;i<n;i++)
	{
		vektory [i] += a[i] + b[i];
	}	
}


int main()
{
    int n, x;
    printf("Zadej pocet prvku v poli: ");
    scanf("%d", &n);
    printf("To cislo, ktere hledas: ");
    scanf("%d", &x);

    int a[n], b[n], vektory[n];

    nacteni(a,n);
    nacteni(b,n);
    vektor(a, b, vektory, n);
    vypis(vektory, n);

    return 0;
}



