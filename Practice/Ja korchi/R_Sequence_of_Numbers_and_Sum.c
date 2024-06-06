#include<stdio.h>

int main()

{

    
    while(1)
    {
        int m, n;
        scanf("%d %d", &n, &m);
        int sum = 0;
        if(n <= 0 || m <= 0)
        {
            break;
        }
        else
        {
            if(m > n)
            {
                for(int i = n; i <= m; i++)
                {
                    printf("%d ", i);
                    sum = sum + i;
                }
                printf("sum =%d\n", sum);
            }
            else
            {
                for(int i = m; i <= n; i++)
                {
                    printf("%d ", i);
                    sum = sum + i;
                }
                printf("sum =%d\n", sum);
            }
        }
    }
    printf("\n");

    return 0;
}