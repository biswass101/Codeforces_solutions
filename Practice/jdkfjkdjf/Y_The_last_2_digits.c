#include<stdio.h>
int main()
{
    long long int a, b, c, d, mul1, mul2;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    mul1 = (a * b) % 100;
    mul2 = (c * d) % 100;
    int key = mul1 * mul2;

    int first_digit = key % 10;
    key /= 10;
    int second_digit = key % 10;
    key /= 10;

    printf("%d%d\n", second_digit, first_digit);
    
    return 0;
}