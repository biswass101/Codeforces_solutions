#include<stdio.h>

int main()

{

    int x, y;
    char c;
    scanf("%d %c %d", &x, &c, &y);
    if(c == '>')
    {
        int cmp = x > y;
        if(cmp == 1)
        {
            printf("Right\n");
        }
        else
        {
            printf("Wrong\n");
        }
    }

    else if(c == '<')
    {
        int cmp = x < y;
        if(cmp == 1)
        {
            printf("Right\n");
        }
        else
        {
            printf("Wrong\n");
        }
    }
    else
    {
        int cmp = (x == y);
        if(cmp == 1)
        {
            printf("Right\n");
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}