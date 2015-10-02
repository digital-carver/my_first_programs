/* Finds whether a given no. is a prime number */
#include<stdio.h>
#include<conio.h>

void main()
{
    int i,n,c;
    clrscr();
    printf("Enter n value\t");
    scanf("%d", &n);
    i = c = 2;
    for(i = 2; i < n; i++)
    {
        if (n%i == 0)
        {
            printf("\nThe no. is not prime");
            i = n-1;
            break;
        }
    }
    if(n == i)
        printf("\nThe no. is prime");
    getch();
}
