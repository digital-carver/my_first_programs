long fact(int x)
{
    int i;
    long prod = 1;
    for(i = 1; i <= x; i++)
        prod *= i;
    return prod;
}

void fwith177()
{
    int x, y;
    x = 0; y = 0;
    for(x = 0; x <= 25; x++)
        for (y = 0; y < 80; y++)
        {
            gotoxy(y, x);
            printf("%c", 177);
        }
}

void erase177()
{
    int x, y;
    for(x = 2; x < 24; x++)
    {
        delay(20);
        for (y = 2; y < 80; y++)
        {
            gotoxy(y, x);
            printf("%c", 32);
        }
    }
    gotoxy(2, 2);
}

void clear()

void decorscr()
{
    int x = 1, y = 1, c;
    c = 0;
    while(y = y)
    {
        while(y < 80)
        {
            if(c == 1)
                x = 24;
            gotoxy(y, x);
            printf("* ");
            y+=2;
        }
        y = 1;
        c++;
        if (c < 2)
            continue;
        else
            break;
    }
    x = y = 1;
    c = 0;
    while(x = x)
    {
        while(x < 25)
        {
            if(c == 1)
                y = 80;
            gotoxy(y, x);
            printf(" *");
            x++;
        }
        x = 1;
        c++;
        if (c < 2)
            continue;
        else
            break;
    }
}

long power(int x, int y)
{
    int y1;
    long pow = 1;
    if(y == 0)
        return(1);
    for (y1 = 0; y1 < y; y1++) {
        pow *= x;
    }
    return pow;
}

int seperate(int n, int *p)
{
    int dig, dig1, i, i1, i2, p1, m, k, j, z, c, ch;
    k = 10;
    dig = j = 1;
    p1 = n%k;
    for (i = 10; n/i != 0; i*=10)
        dig++;
    while(k < n)
    {
        p1 = n%k;
        for (i1 = 0; p1/i1 != 0; i1*=10)
            ;
        p[j] = p1%i1;
        k *= 10;
        j++;
    }
    p[dig] = n%k;
    p[0] = 0;
    z = 1;
    for(j = 1; j <= dig; j++)
    {
        p[j] = (p[j] - p[j - 1])/z;
        z *= 10;
    }
    return dig;
}


