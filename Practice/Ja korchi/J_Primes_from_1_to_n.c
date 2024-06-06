#include<stdio.h>

int main()

{

    int n; //5
    int count = 0;
    scanf("%d", &n);
    printf("%d ", 2);
    for(int i = 3; i <= n; i++)
    {
        for(int j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                count++;
            }
        }

        if(count == 0)
        {
            printf("%d ", i);
        }
        count = 0;
    }

    return 0;
}