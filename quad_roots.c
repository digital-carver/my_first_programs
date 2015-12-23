#include<stdio.h>
#include<conio.h>

void main()
{
    float a, b, c, d, e, x, y;
    clrscr();
    printf("Enter a, b, c");
    scanf("%f%f%f", &a, &b, &c);
    d = (b*b) - (4 * a * c);
    if(d >= 0)
    {
        e = sqrt(d);
        x = (-b + e)/(2*a);
        y = (-b - e)/(2*a);
        printf("\nx1 = %f\tx2 = %f", x, y);
    }
    else 
        printf("No real roots found");
    getch();
}


