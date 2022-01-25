#include <stdio.h>
#include <stdlib.h>

/*7. Napiš funkci, která do pole vloží čísla od n do 1.*/

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
	for(i=0;i<=n;i++)
	{
		a[i] = n - i;
	}
}


int main()
{
	int n;
        printf("Zadej pocet prvku v poli: ");
        scanf("%d", &n);

        int a[n];

        vlozeni_od_n_do_1(a,n);
        vypis(a,n);

        return 0;
}


