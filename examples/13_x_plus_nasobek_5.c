#include <stdio.h>
#include <stdlib.h>

/*13. Máme pole o n prvcích a celé číslo x. Napište funkci, která vezme tato data a vyplní pole tak, že do prvního políčka dá číslo x a do každého dalšího vždy číslo o 5 větší: Př: x = 2, pole: 2, 7, 12, 17, ...*/


void vypis(int p[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", p[i]);
    }
    printf("\n");
}

void plus_5_x(int a[], int n, int x)
{
    int i;
    for(i=0; i<=n;i++)
    {
        a[i] = i*5 +x;
    }
}

int main()
{
    int n, x;
    printf("Enter n numbers: ");
    scanf("%d", &n);
    printf("Enter the x number: ");
    scanf("%d", &x);

    int a[n];

    plus_5_x(a, n, x);
    vypis(a, n);

    return 0;
}

