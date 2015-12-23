#include<stdio.h>
#include<conio.h>

void main()
{
    int l, i, j = 2;
    printf("Enter a limit: ");
    scanf("%d", &l);
    for(i = 2; i <= l; i++)
    {
        j = 2;
        while(i % j != 0)
            j++;
        if(j == i)
            printf("\n%d is prime", i);
    }
    getch();
}

