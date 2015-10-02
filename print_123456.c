/*
   1
   2 3
   4 5 6
*/
#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,n, j1 = 1;
    clrscr();
    printf("Enter n\t");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++, j1++)
            printf("%d\t", j1);
        printf("\n");
    }
    getch();
}

