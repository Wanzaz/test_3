#include <stdio.h>
#include <stdlib.h>

/*16. Napiš funkci, která vezme pole a číslo x a vrátí počet výskytů čísla x v poli.*/

void nacteni(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter %d. element of area: ", i + 1);
        scanf("%d", &a[i]);
    }
}


int kolik_x(int a[], int n,int x)
{
	int i, pocet=0;
	for(i=0;i<n;i++)
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
    int n;
    printf("Zadej pocet prvku v poli: ");
    scanf("%d", &n);

    int a[n], b[n], vektory[n];

    nacteni(a,n);
    printf("Cislo %d je %d krat v poli", x, kolik_x(a, n));

    return 0;
}





