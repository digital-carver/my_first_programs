/* Finds even and odd no.s */
#include<stdio.h>
#include<conio.h>

void main()
{
    int n,i,m[25];
    clrscr();
    printf("Enter n value: ");
    scanf("%d", &n);
    printf("\nEnter %d numbers\n", n);
    for(i = 1; i <= n; i++)
        scanf("%d", &m[i]);
    for(i = 1; i <= n; i++)
    {
        if(m[i] % 2 == 0)
            printf("\t%d is even\n", m[i]);
        else
            printf("\t%d is odd\n", m[i]);
    }
    getch();
}

