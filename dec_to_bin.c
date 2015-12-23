#include<stdio.h>
#include<conio.h>

void main()
{
    int i, n, bin[30], c;
    clrscr();
    printf("Enter a decimal no.\t");
    scanf("%d", &n);
    i = 1;
    c = 0;
    while(n != 1)
    {
        bin[i] = n%2;
        n = n/2;
        i++;
        c++;
    }
    printf("Binary equivalent = ");
    printf("%d", n);
    for(i = c; i >= 1; i--)
        printf("%d", bin[i]);
    getch();
}

