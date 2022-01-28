#include <stdio.h>
#include <stdlib.h>

/*23. Napiš funkci, která vezme pole o n číslech (znacích) a dvě čísla a vyplní toto pole do poloviny jedním číslem a druhou polovinu druhým číslem: čísla: 2, 8 pole: 2, 2, 2, 8, 8, 8*/

void vyplneni_dvema_cisl_do_poloviny(int p[], int n, int num1, int num2)
{
  for (int i = 0; i < n/2; i++)
  {
    p[i] = num1;
  }
  for (int i = n/2; i < n; i++)
  {
    p[i] = num2;
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
    int n, num1, num2;
    printf("Enter a number n: ");
    scanf("%d", &n);
    printf("Enter a number num: ");
    scanf("%d", &num1);
    printf("Enter a number num2: ");
    scanf("%d", &num2);

    int a[n];

    vyplneni_dvema_cisl_do_poloviny(a, n, num1, num2);
    vypis(a, n);

    return 0;
}

