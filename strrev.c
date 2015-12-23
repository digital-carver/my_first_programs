#include<stdio.h>
#include<conio.h>

void main()
{
    int l, i, z;
    char *s;
    clrscr();
    printf("Enter the string");
    scanf("%s", s);
    l = strlen(s);
    for(i = 0, l = l - 1; i < l; i++, l--)
    {
        z = s[i];
        s[i] = s[l];
        s[l] = z;
    }
    printf("Reversed string :\n\t");
    printf("%s", s);
    getch();
}

