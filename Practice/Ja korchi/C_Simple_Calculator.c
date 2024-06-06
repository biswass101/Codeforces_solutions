#include<stdio.h>

int main()

{

    long long int x, y;
    scanf("%lld %lld", &x, &y);
    long long int sum, por, sub;
    sum = x + y;
    por = x * y;
    sub = x - y;
    printf("%lld + %lld = %lld\n", x, y, sum);
    printf("%lld * %lld = %lld\n", x, y, por);
    printf("%lld - %lld = %lld\n", x, y, sub);

    return 0;
}