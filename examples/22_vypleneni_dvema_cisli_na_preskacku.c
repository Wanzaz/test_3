#include <stdio.h>
#include <stdlib.h>

/*22. Napiš funkci, která vezme pole o n číslech (znacích) a dvě čísla a vyplní toto pole čísly na přeskáčku: čísla: 2, 8, pole: 2, 8, 2, 8 ...*/

void vypln_dvema_cisly(int a[], int n, int num, int num2)
{
    int i;
    for(i=0;i<n;i+=1)
    {
        if(i%2==1)
            a[i]=num;
        else
            a[i]=num2;
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
    int n, num, num2;
    printf("Enter a number n: ");
    scanf("%d", &n);
    printf("Enter a number num: ");
    scanf("%d", &num);
    printf("Enter a number num2: ");
    scanf("%d", &num2);

    int a[n];

    vypln_dvema_cisly(a, n, num, num2);
    vypis(a, n);

    return 0;
}

