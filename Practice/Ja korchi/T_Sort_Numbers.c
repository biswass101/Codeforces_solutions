#include<stdio.h>

int main()

{

    int x, y, z;
    int min, mid, max;
    scanf("%d %d %d", &x, &y, &z);
    if(x <= y && x <= z)
    {
        min = x;
    }
    else if( y <= x && y <= z)
    {
        min = y;
    }
    else
    {
        min = z;
    }

    if((x >= y && x <= z) || (x >= z && x <= y))
    {
        mid = x;
    }
    else if((y >= x && y <= z) || (y >= z && y <= x))
    {
        mid = y;
    }
    else
    {
        mid = z;
    }

    if(x >= y && x >= z)
    {
        max = x;
    }
    else if( y >= x && y >= z)
    {
        max = y;
    }
    else
    {
        max = z;
    }


    printf("%d\n%d\n%d\n\n", min, mid, max);
    printf("%d\n%d\n%d\n", x, y, z);
    return 0;
}