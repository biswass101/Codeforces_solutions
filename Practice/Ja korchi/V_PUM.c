#include<stdio.h>

int main()

{

    int n, k = 1;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= 4; j++)
        {
            if(j < 4)
            {
                printf("%d ", k);
            }
            else
            {
                printf("PUM\n");
            }
            k++;
        }
    }

    return 0;
}