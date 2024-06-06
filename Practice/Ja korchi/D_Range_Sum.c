#include<stdio.h>

int main()

{

    long long int n;
    scanf("%lld", &n);
    while(n--)
    {
        long long int x, y;
        scanf("%lld %lld", &x, &y);
        long long int sum = 0;
        for(long long int i = x; i <= y; i++)
        {
            sum = sum + i;

        }
        printf("%lld\n", sum);
    }

    return 0;
}