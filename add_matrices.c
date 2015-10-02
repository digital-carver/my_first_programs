/*Add matrices*/
#include<stdio.h>
#include<conio.h>

void main()
{
    int r,c,ma[30][30],mb[30][30],tot[30][30],i,j,x,y;
    clrscr();
    printf("Enter no. of rows & cols: ");
    scanf("%d%d", &r, &c);
    x = 6;
    y = 1;
    printf("Enter %d values for matrix A", r*c);
    for(i = 0; i < r; i++)
    {
        y = 1;
        for(j = 0; j < c; j++)
        {
            gotoxy(x, y);
            scanf("%d", &ma[i][j]);
            y+=10;
        }
        x+=2;
    }
    printf("\nEnter %d values for matrix B", r*c);
    x+=1;
    for(i = 0; i < r; i++)
    {
        y = 1;
        for(j = 0; j < c; j++)
        {
            gotoxy(x, y);
            scanf("%d", &mb[i][j]);
            y = y+10;
        }
        x = x+2;
    }
    printf("\nAdded matrix:");
    x += 1;
    for(i = 0; i < r; i++)
    {
        y = 1;
        for(j = 0; j < c; j++)
        {
            gotoxy(x, y);
            tot[i][j] = ma[i][j] + mb[i][j];
            printf("%d", tot[i][j]);
            y += 10;
        }
        x += 2;
    }
    getch();
}

