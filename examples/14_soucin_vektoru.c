#include <stdio.h>
#include <stdlib.h>

/*14. Máme dvě pole (vektory) o n prvcích. Napište funkci, která vezme tyto dva vektory  o n prvcích a vrátí jejich skalární součin. Př. a = 1, 0, 3  b = 2, -1, 0 Funkce vrací 1*2 + 0* (-1) + 3* 0 = 2*/

void nacteni(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter %d. element of area: ", i + 1);
        scanf("%d", &a[i]);
    }
}

int vektor_soucin(int pole1[], int pole2[], int n)
{
  int i, soucin=0;
  for(i=0;i<n;i++)
  {
    soucin += pole1[i] * pole2[i];
  }
  return soucin;
}

int main()
{
    int n;
    printf("Enter n numbers: ");
    scanf("%d", &n);

    int a[n], b[n];

    nacteni(a, n);
    nacteni(b, n);
    printf("This is the result: %d", vektor_soucin(a, b, n));


    return 0;
}

