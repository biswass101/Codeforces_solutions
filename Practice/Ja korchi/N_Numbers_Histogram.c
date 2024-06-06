#include<stdio.h>

int main()

{

    char s;
    int n, a;
    scanf("%c %d", &s, &n);
    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        if(s == '+')
        {
            for(int i = 1; i <= a; i++)
            {
                printf("%c", s);
            }
            printf("\n");
        }

        if(s == '-')
        {
            for(int i = 1; i <= a; i++)
            {
                printf("%c", s);
            }
            printf("\n");
        
        }
        if(s == '*')
        {
            for(int i = 1; i <= a; i++)
            {
                printf("%c", s);
            }
            printf("\n");
        }

        if(s == '/')
        {
            for(int i = 1; i <= a; i++)
            {
                printf("%c", s);
            }
            printf("\n");
        }          

    }

    return 0;
}