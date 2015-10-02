/* Number dropping */
#include<stdio.h>
#include<conio.h>

main()
{
    int n, no[30], x, y;
    clrscr();
    printf("Enter 10 no.s");
    for(i = 0; i < 10; i++)
        scanf("%d", &no[i]);
    i = 0;
    clrscr();
    for(x = 1; x <= 12; x++)
    {
        i = 0;
        clrscr();
        for(y = 1; y <= 80; y+=7)
        {
            gotoxy(y, x);
            if (i < 10)
                printf("%d", no[i]);
            i++;
        }
        y = 1;
    }
    gotoxy(25, 12);
    printf("Oh! The no.s fell down");
    getch();
}

