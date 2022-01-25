#include <stdio.h>
#include <stdlib.h>

/*5. Napiš funkci, která vypíše pole opačně*/


void nacteni(int a[], int n)
{
	int i;
        for(i=0;i<n;i++)
        {
		printf("Enter %d. element of area: ", i + 1);
		scanf("%d", &a[i]);
	}
}


void vypis_opacne(int a[], int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d ", a[n-1-i]);
}


int main()
{
	int n;
        printf("Zadej pocet prvku v poli: ");
        scanf("%d", &n);

        int a[n];

        nacteni(a,n);
        vypis_opacne(a,n);

        return 0;
}

