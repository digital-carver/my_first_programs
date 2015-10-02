/*
   * 
   * *
   * * *
*/
#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,n;
    printf("Enter a no. less than 20");
    scanf("%d", &n);
    i = j = 1;
    while(i <= n)
    {
        j = 1;
        while(j <= i)
        {
            printf("*\t");
            j++;
        }
        printf("\n");
        i++;
    }
    getch();
}

