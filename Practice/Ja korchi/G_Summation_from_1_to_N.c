#include<stdio.h>

int main()

{

    long long int n;
    long long int sum = 0;
    scanf("%lld", &n);
    for(int i = 1; i <= n; i++)
    {
        sum  = sum + i;
    }
    printf("%lld\n", sum);
    return 0;
}