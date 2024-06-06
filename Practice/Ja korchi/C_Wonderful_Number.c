#include<stdio.h>
//not solved
void wond(int n)
{
    int bin[32];
    int r_bin[32];
    int count  = 0;
    while(n)
    {
        int rem = n % 2;
        bin[count] = rem; // 001
        count++;
        n/=2;
    }
    int x = 0;
    for(int i = count-1; i >= 0; i--)
    {
        r_bin[x] = bin[i];
        x++;
    }

    int flag = 0;
    for(int i = 0; i < count; i++)
    {
        if(bin[i] != r_bin[i])
        {
            flag = 1;
        }
    }

    if(flag == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
int main()

{

    int n; // 3
    scanf("%d", &n);
    wond(n);
}