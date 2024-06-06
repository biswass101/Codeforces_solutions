#include<stdio.h>
//Not solved--!!1
int main()

{

    int n, k, a;
    scanf("%d %d %d", &n, &k, &a);
    //(n*k)/a
    float d = (float)(n*k)/a;
    long long int part_dec = d;
    long long rslt = (d - part_dec);
    printf("%f %lld %lld\n", d, part_dec, rslt);
    if(rslt == 0)
    {
        printf("int\n");
    }
    else if(part_dec >= 2147483648)
    {
        printf("long long\n");
    }
    else
    {
        printf("double\n");
    }

    return 0;
}