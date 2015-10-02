/*
   3 3 3
   2 2
   1
*/
#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,n;
    clrscr();
    printf("Enter n\t");
    scanf("%d", &n);
    i = n;
    j = 1;
    while(i >= 1)
    {
        j = 1;
        while(j <= i)
        {
            printf("%d\t", i);
            j++;
        }
        printf("\n");
        i--;
    }
    getch();
}

