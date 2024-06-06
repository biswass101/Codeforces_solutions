#include<stdio.h>

int main()

{

    long long int m, n;
    scanf("%lld %lld", &m, &n);
    printf("%d\n", (m%10)+(n%10));

    return 0;
}