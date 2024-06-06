#include<stdio.h>

int main()

{

    int a, b;
    char s;
    scanf("%d %c %d", &a, &s, &b);
    if(s == '+')
    {
        int sum = a + b;
        printf("%d\n", sum);
    }
    else if(s == '-')
    {
        int sub = a - b;
        printf("%d\n", sub);
    }
    else if(s == '*')
    {
        int mul = a * b;
        printf("%d\n", mul);
    }
    else
    {
        int div = a / b;
        printf("%d\n", div);
    }

    return 0;
}