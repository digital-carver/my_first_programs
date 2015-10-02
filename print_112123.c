/*
   1
   1 2
   1 2 3
*/
#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,n;
    clrscr();
    printf("Enter n\t");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d\t", j);
        }
        printf("\n");
    }
    getch();
}

