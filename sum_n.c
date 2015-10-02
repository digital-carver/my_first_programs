/* Gives sum of N nos */
#include<stdio.h>
#include<conio.h>
void main()
{
    int sum = 0, i, m[30], n;
    clrscr();
    printf("Enter n value: ");
    scanf("%d", &n);
    printf("\n Enter %d numbers:\n ", n);
    for(i = 1; i <= n; i++)
    {
        scanf("%d", &m[i]);
        sum = sum + m[i];
    }
    printf("\nSum of the numbers = %d", sum);
    getch();
}
