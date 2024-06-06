#include<stdio.h>

int main()

{

    int p, dp;
    scanf("%d %d", &p, &dp);
    float mp = (float)(100*dp)/(100-p);
    printf("%.2f\n", mp);

    return 0;
}