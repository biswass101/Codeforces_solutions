#include<stdio.h>

int main()

{

    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    long long int product = a * b * c * d;
    long long int d1 = product % 10;
    product = product / 10;
    long long int d2 = product % 10;
    product = product/10;
    printf("%lld%lld\n", d2,d1);

    return 0;
}