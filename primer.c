/* Finds & displays the prime no.s among the no.s given */
#include<stdio.h>
#include<conio.h>
void main()
{
    int prim[30],i,n,j,c;
    clrscr();
    printf("How many no.s do you want to enter?\t");
    scanf("%d",&n);
    printf("\n\tEnter %d no.s\n", n);
    j = 2;
    c = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &prim[i]);
    }
    for (i = 0; i < n; i++)
    {
        j=2;
        while (prim[i]%j != 0)
            j++;
        if (j == prim[i])
        {
            printf("\n\t%d is prime", prim[i]);
            c++;
        }
    }
    if (c == 0)
        printf("\nNo prime no. found");
    getch();
}

