#include <stdio.h>
#include <stdlib.h>

/*6. Napiš funkci, která do pole vloží čísla od 1 do n*/

void vypis(int a[], int n)
{
 	int i;
	for(i=0;i<n;i++)
        {
		printf("%d, ", a[i]);
	}
	printf("\n");
}


void vlozeni_od_1_do_n(int a[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		a[i] = i + 1;
	}
}


int main()
{
	int n;
        printf("Zadej pocet prvku v poli: ");
        scanf("%d", &n);

        int a[n];

        nacteni(a,n);
        vlozeni_od_1_do_n(a,n);
        vypis(a,n);

        return 0;
}

