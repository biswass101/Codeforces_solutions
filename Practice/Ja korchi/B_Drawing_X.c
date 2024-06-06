#include<stdio.h>

int main()

{

    int n;
    int i;
    int j;

    scanf("%d", &n);
    int f = n;
    for(i = 1; i <= n; i++)
    {
        
        for(j = 1; j <= n; j++)
        {
            if(i == n/2+1 && j == n/2+1)
            {
                printf("%c", 'X');
                f--;
            }
            else if(j == f)
            {
                printf("/");
                f--;
            }
            
            else if( i == j)
            {
                printf("\\");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    

    return 0;
}