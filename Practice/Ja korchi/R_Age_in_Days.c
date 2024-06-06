#include<stdio.h>

int main()

{

    int n;
    scanf("%d", &n);
    int y, m, d;
    y = n / 365;
    n = n % 365;
    m = n / 30;
    n = n % 30;
    d = n / 1;
    n = n % 1;
    printf("%d years\n", y);
    printf("%d months\n", m);
    printf("%d days\n", d);

    return 0;
}