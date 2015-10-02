/*
   3 2 1
   3 2
   3
*/
#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,n;
    clrscr();
    printf("Enter n\t");
    scanf("%d", &n);
    i = 1;
    j = n;
    while(i <= n)
    {
        j = n;
        while(j >= i)
        {
            printf("%d\t", j);
            j--;
        }
        printf("\n");
        i++;
    }
    getch();
}

