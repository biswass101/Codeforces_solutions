/*

n = 4;

sss*     1
ss***    2
s*****   3
*******  4
*******  5
s*****   6
ss***    7
sss*     8

*/




#include<stdio.h>

int main()

{

    int n, k = 1, s;
    scanf("%d", &n);
    s = n - 1;
    for(int i = 1; i <= (2*n); i++)
    {
        for(int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for(int j = 1; j <= k; j++)
        {
            printf("*");
        }
        if(i < n)
        {
            k+=2;
            s-=1;
        }
        if( i > n && i != n)
        {
            k-=2;
            s+=1;
        }

        printf("\n");

    }


    return 0;
}