#include<stdio.h>
int main()
{
    int n, a, b;
    int sum1 = 0;
    int sum2 = 0;
    scanf("%d %d %d", &n, &a, &b);
    for(int i = 1; i <= n; i++) //n = 20
    {
        int x = i;
        while(x)
        {
            int rem = x % 10;
            sum1 = sum1 + rem;
            x = x / 10;
        
        }
        if(sum1 >= a && sum1 <= b)
        {
            sum2 = sum2 + i;
        }
        sum1 = 0;
    }
    
    printf("%d\n", sum2);
}