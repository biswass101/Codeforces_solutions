#include<stdio.h>

int main()

{

    float n;
    scanf("%f", &n);
    int x = n;
    if(n == x)
    {
        printf("int %d\n", x);
    }
    else
    {
        printf("float %d %.3f\n",x, (n-x));
    }

    return 0;
}