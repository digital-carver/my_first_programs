/*
   1
   2 2
   3 3 3
*/
#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,n;
    clrscr();
    printf("Enter n value\t");
    scanf("%d", &n);
    i = j = 1;
    while(i <= n)
    {
        j = 1;
        while(j <= i)
        {
            printf("%d\t", i);
            j++;
        }
        printf("\n");
        i++;
    }
    getch();
}

